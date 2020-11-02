

#include "Strategy.h"
#include "StrategyType.h"
#include "GuestStrategy.h"
#include "VIPStrategy.h"
#include "SuperVIPStrategy.h"
#include "MemberFactory.h"


MemberFactory::MemberFactory()
{
	this->m_mapns.clear();
	this->Register();
}

MemberFactory::~MemberFactory()
{
	this->m_mapns.clear();
}

void MemberFactory::Register()
{
	this->m_mapns.insert(std::make_pair(StrategyType::GUEST, new GuestStrategy()));
	this->m_mapns.insert(std::make_pair(StrategyType::VIP, new VIPStrategy()));
	this->m_mapns.insert(std::make_pair(StrategyType::SVIP, new SuperVIPStrategy()));
}
