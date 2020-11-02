// main

#include <iostream>
#include "Strategy.h"
#include "StrategyType.h"
#include "MemberFactory.h"

using namespace std;

int main()
{
	MemberFactory* memberFactory = new MemberFactory();

	memberFactory->GetStragegy(StrategyType::GUEST)->ShowStrategy();
	memberFactory->GetStragegy(StrategyType::VIP)->ShowStrategy();
	memberFactory->GetStragegy(StrategyType::SVIP)->ShowStrategy();

	delete memberFactory;

	system("pause");
	return 0;
}

// Guest member : GuestStrategy::ShowStrategy()
// VIP member VipStrategy::ShowStrategy()
// Super VIP member : SuperVIPStrategy::ShowStrategy()
