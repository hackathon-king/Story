#pragma once
#include <list>
#include <algorithm> 
#include "Subject.h"

class MonitorSubject : public Subject
{
public:
    void RegisterObserver(Observer* observer) override
    {
        this->m_listObservers.push_back(observer);
    }

    void RemoveObserver(Observer* observer) override
    {
        std::list<Observer*>::iterator it;
        for (it = this->m_listObservers.begin(); it != this->m_listObservers.end(); it++)
        {
            if (observer == *it)
            {
                this->m_listObservers.remove(observer);
                break;
            }
        }
    }

    void NotifyObserver(int value) override
    {
        for (auto observer : this->m_listObservers)
        {
            observer->update(value);
        }
    }

private:
    std::list<Observer*> m_listObservers;
};
