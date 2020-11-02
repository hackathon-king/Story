#pragma once

// Super VIP member strategy class
class SuperVIPStrategy : public Strategy
{
public:
	SuperVIPStrategy();
	virtual ~SuperVIPStrategy();

	void ShowStrategy() override
	{
		std::cout << "Super VIP member: SuperVIPStrategy::ShowStrategy()" << std::endl;
	}

};

