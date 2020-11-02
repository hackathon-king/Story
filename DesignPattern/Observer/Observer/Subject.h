#pragma once
#include "Observer.h"

class Subject
{
public:
	virtual void RegisterObserver(Observer* observer) = 0;
	virtual void RemoveObserver(Observer* observer) = 0;
	virtual void NotifyObserver(int value) = 0;
};