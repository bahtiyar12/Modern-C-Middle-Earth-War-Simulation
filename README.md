# Modern C++ Middle Earth War Simulation

This project is a Middle Ear war simulation application written in Modern C++. It demonstrates the use of **polymorphism** and the **factory design pattern** to create and manage the armies of different nations and simulate a war. The project is intended to enhance knowledge of Modern C++ and explore advanced concepts in object-oriented programming.

## Features
- **Nation Classes (`Mordor`, `Rivendell`)**: Represent different nations with unique characteristics.
- **Barracks (`Barrack`)**: Each nation can build its own barracks to produce soldiers.
- **Soldiers (`Soldier`)**: A base class representing soldiers, allowing for polymorphic behavior.
- **War Simulation (`War`)**: Manages the war between alliances and determines the outcome.

## Key Concepts
- **Polymorphism**: Used to allow different types of soldiers and barracks to behave consistently under a common interface.
- **Factory Design Pattern**: Implemented to create soldiers dynamically based on the type of barracks.

### `main` Function Overview
The `main` function creates two nations, recruits their armies, and initiates a war simulation. Here's a snippet:

```cpp
#include <iostream>
#include "mordor.h"
#include "rivendell.h"
#include "war.h"

int main()
{
    auto mordor = std::make_unique<Mordor>();
    auto orcBarrak = mordor->buildBarrack();
    std::vector<std::unique_ptr<Soldier>> mordorArmy;
    for (int i = 0; i < 30; i++)
    {
        mordorArmy.push_back(orcBarrak->make_soldier());
    }
    mordor->recruitSoldiers(mordorArmy);

    auto rivendell = std::make_unique<Rivendell>();
    auto elfBarrak = rivendell->buildBarrack();
    std::vector<std::unique_ptr<Soldier>> elfArmy;
    for (int i = 0; i < 30; i++)
    {
        elfArmy.push_back(elfBarrak->make_soldier());
    }
    rivendell->recruitSoldiers(elfArmy);

    std::vector<std::unique_ptr<Country>> alliance1;
    std::vector<std::unique_ptr<Country>> alliance2;
    alliance1.push_back(std::move(mordor));
    alliance2.push_back(std::move(rivendell));

    War war(alliance1, alliance2);
    war.start();
    std::cout << "War Result " << War::ResultS[static_cast<int>(war.result())];
}
