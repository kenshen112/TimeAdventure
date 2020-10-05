#include "Actions.h"


void Actions::execute(Action a)
{
	switch (a)
	{
	case Action::MOVE:
		std::cout << "Which Direction: ";
		std::cin >> dir;
		parseDirections(dir, common.currentRoom);
		break;
	case Action::HELP:
		help();
		break;

	default:
		std::cout << "Non Commnad" << std::endl;
		break;
	}
}

Directions Actions::parseDirections(int command, Room currentRoom) // This needs to check against avalible directions. In string form?
{
	for (int i = 0; i < currentRoom.AvalibleDir().size(); i++)
	{
		if ( command == currentRoom.AvalibleDir()[i])
		{
			return currentDirection[command];
		}
	}
}

void Actions::move(int x, int y)
{
	// move player and everything else
	common.currentRoom = common.rooms[x][y];
}

void Actions::help()
{
	std::cout << "Possiible Commands are: ";
	for (int i = 0; i < 10; i++)
	{
		std::cout << common.possibleCommands[i] << ", " << std::endl;
	}
}
