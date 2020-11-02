#pragma once

// VIP member strategy class
class VIPStrategy : public Strategy
{
public:
	VIPStrategy();
	virtual ~VIPStrategy();

	void ShowStrategy() override
	{
		std::cout << "VIP member VipStrategy::ShowStrategy()" << std::endl;
	}

};

