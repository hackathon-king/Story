#pragma once
#include <iostream>

class Observer
{
public:
	virtual void update(int value) = 0;
};