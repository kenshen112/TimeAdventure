#include "CommandParser.h"

bool CommandParser::parseCommand(std::string command)
{
	action.execute(selectedAction[command]);	
	return true;
}

std::string CommandParser::recieveCommand()
{
	// Check for and recieve input in here.

	std::string command;

	std::cout << "> ";
	std::cin >> command;

	if (parseCommand(command))
	{
		return command;
	}

	else
	{
		return " ";
	}
}
