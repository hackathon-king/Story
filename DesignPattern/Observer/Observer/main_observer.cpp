// mian
#include "MonitorSubject.h"
#include "XiaoMingObserver.h"
#include "LiHuaObserver.h"

int main()
{
	Subject* monitor = new MonitorSubject();
	Observer* xiaoming = new XiaoMingObserver();
	Observer* lihua = new LiHuaObserver();

	monitor->RegisterObserver(xiaoming);
	monitor->RegisterObserver(lihua);
	monitor->NotifyObserver(1);

	delete monitor;
	delete xiaoming;
	delete lihua;

	system("pause");
	return 0;
}

// XiaoMing StopCopyWork + 1
// LiHua StopPlayGame + 1
