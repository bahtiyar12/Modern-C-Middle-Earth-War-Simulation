#include "mordor.h"
#include "orkBarrack.h"
#include <numeric>


std::unique_ptr<Barrack> Mordor::buildBarrack()
{
	return std::make_unique<OrkBarrack>();
}

void Mordor::recruitSoldiers(std::vector<std::unique_ptr<Soldier>>& soldiers)
{
	m_soldiers.insert(m_soldiers.begin(), std::make_move_iterator(soldiers.begin()), std::make_move_iterator(soldiers.end()));
}


int Mordor::power() const 
{
	return std::accumulate(m_soldiers.begin(), m_soldiers.end(), 0, [](int total, const std::unique_ptr<Soldier> &soldier)
		{
			return 	total += (soldier->health() + soldier->attack());
		});
}
