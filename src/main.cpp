#include <iostream>
#include <iomanip>

#include "GameManager.h"

int main()
{
	GameManager manager;

	if (manager.Init())
	{
		manager.Run();
	}

	return 0;
}