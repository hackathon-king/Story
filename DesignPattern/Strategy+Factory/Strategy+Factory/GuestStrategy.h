#pragma once

// Guest member strategy class
class GuestStrategy : public Strategy
{
public:
	GuestStrategy();
	virtual ~GuestStrategy();

	void ShowStrategy() override
	{
		std::cout << "Guest member: GuestStrategy::ShowStrategy()" << std::endl;
	}

};

