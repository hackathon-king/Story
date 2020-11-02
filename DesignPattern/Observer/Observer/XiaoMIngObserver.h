#pragma once
#include "Observer.h"

class XiaoMingObserver : public Observer
{
public:
	void update(int value) override
	{
		this->StopCopyWork(value);
	}

	void StopCopyWork(int value)
	{
		std::cout << "XiaoMing StopCopyWork + " << value << std::endl;
	}
};