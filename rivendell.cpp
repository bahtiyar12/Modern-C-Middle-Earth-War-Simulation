#include "rivendell.h"
#include "elfBarrack.h"
#include <iterator>
#include <numeric>


std::unique_ptr<Barrack> Rivendell::buildBarrack()
{
    return std::make_unique<ElfBarrack>();
}

void Rivendell::recruitSoldiers(std::vector<std::unique_ptr<Soldier>>& soldiers)
{
    m_soldiers.insert(m_soldiers.end(), std::make_move_iterator(soldiers.begin()), std::make_move_iterator(soldiers.end()));
}

int Rivendell::power() const
{
	return std::accumulate(m_soldiers.begin(), m_soldiers.end(), 0, [](int total, const std::unique_ptr<Soldier> &soldier)
		{
			return 	total += (soldier->health() + soldier->attack());
		});
}
