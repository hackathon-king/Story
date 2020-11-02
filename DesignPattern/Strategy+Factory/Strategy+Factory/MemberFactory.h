#pragma once

#include <map>

// Member Abstract Factory class
class MemberFactory
{
public:
	// type define
	using mapns = std::map<int, Strategy*>;

public:
	MemberFactory();
	virtual ~MemberFactory();

	Strategy* GetStragegy(int strategyType)
	{
		return this->m_mapns.at(strategyType);
	}

private:
	// Register Strategy
	void Register();

private:
	mapns m_mapns;
};

