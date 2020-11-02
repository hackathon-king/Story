#pragma once

#include <iostream>

// Strategy abstract class
class Strategy
{
public:
	Strategy();
	virtual ~Strategy();

	void virtual ShowStrategy() = 0;
};

