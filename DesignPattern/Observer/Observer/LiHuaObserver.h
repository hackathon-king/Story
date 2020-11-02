#pragma once
#include "Observer.h"

class LiHuaObserver : public Observer
{
public:
	void update(int value) override
	{
		this->StopPlayGame(value);
	}

	void StopPlayGame(int value)
	{
		std::cout << "LiHua StopPlayGame + " << value << std::endl;
	}
};