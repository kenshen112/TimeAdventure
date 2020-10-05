#pragma once
#include <iostream>
#include <vector>
#include <string.h>

#include "Actions.h"
#include "Common.h"
class CommandParser
{
private:
	Actions action;

	Common common;
public:
	bool parseCommand(std::string c);
	std::map<std::string, Action> selectedAction;
	std::string recieveCommand();
	void help();

};

