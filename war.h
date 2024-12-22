#pragma once
#include "country.h"
#include <vector>
#include <memory>
class War
{

public :
	enum class  Result {
		First,
		Second,
		Draw
	};
	static const char* ResultS[];
	War( std::vector<std::unique_ptr<Country>>& alliance1,  std::vector<std::unique_ptr<Country>>& alliance2);
	void start();
	Result result() const { return m_result; };


private:
	std::vector<std::unique_ptr<Country>>& m_alliance1;
	std::vector<std::unique_ptr<Country>> &m_alliance2;
	Result m_result = Result::Draw;
};

