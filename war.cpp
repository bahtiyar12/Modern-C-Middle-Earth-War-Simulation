#include "war.h"
#include <numeric>

const char *War::ResultS[] = {"First", "Second", "Draw"};

War::War( std::vector<std::unique_ptr<Country>> & alliance1,  std::vector<std::unique_ptr<Country>>& alliance2) : m_alliance1(alliance1), m_alliance2(alliance2)
{}

void War::start()
{
	auto powerOfAlliance1 = std::accumulate(m_alliance1.begin(), m_alliance1.end(), 0, [](int total, const std::unique_ptr <Country>  &country)
		{
			return total += country->power();
		});

	auto powerOfAlliance2 = std::accumulate(m_alliance2.begin(), m_alliance2.end(), 0, [](int total, const std::unique_ptr <Country> & country)
		{
			return total += country->power();
		});

	if (powerOfAlliance1 > powerOfAlliance2)
		m_result = Result::First;
	else if (powerOfAlliance1 < powerOfAlliance2)
		m_result = Result::Second;
	else
		m_result = Result::Draw;

}
