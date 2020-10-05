#include "Flag.h"

Flag::Flag()
{
	isActive = false;
	flag = " ";
	ID = 0;
}

Flag::Flag(nlohmann::json flagData)
{
	ID = flagData["ID"].get<int>();
	flag = flagData["Flag"].get<std::string>();
}

void Flag::activateFlag()
{
	if (isActive != true)
	{
		isActive = true;
	}

	else
	{
		return;
	}
}

void Flag::deactivateFlag()
{
	if (isActive == true)
	{
		isActive = false;
	}

	else
	{
		return;
	}
}

Flag::~Flag()
{
	isActive = false;
	flag = " ";
	ID = 0;
}