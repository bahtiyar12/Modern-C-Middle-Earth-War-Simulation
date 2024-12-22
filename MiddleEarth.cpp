#include <iostream>
#include "mordor.h"
#include "rivendell.h"
#include "war.h"

int main()
{
    
    auto mordor = std::make_unique<Mordor>();
    auto orcBarrak = mordor->buildBarrack();
    std::vector<std::unique_ptr<Soldier >> mordorArmy;
    for (int i = 0; i < 30; i++)
    {
        mordorArmy.push_back(orcBarrak->make_soldier());

    }
    mordor->recruitSoldiers(mordorArmy);

    auto rivendell = std::make_unique<Rivendell>();
    auto elfBarrak = rivendell->buildBarrack();
    std::vector<std::unique_ptr<Soldier >> elfArmy;
    for (int i = 0; i < 30; i++)
    {
        elfArmy.push_back(elfBarrak->make_soldier());

    }

    rivendell->recruitSoldiers(elfArmy);

    std::vector<std::unique_ptr<Country>> alliance1;
    std::vector<std::unique_ptr<Country>> alliance2;
    alliance1.push_back(std::move((mordor)));
    alliance2.push_back(std::move(rivendell));


    War war(alliance1, alliance2);
    war.start();
    std::cout << "War Result " << War::ResultS[static_cast<int>(war.result())];
}

