#pragma once
#include <iostream>
#include <map>
#include "Room.h"
#include "Common.h"
class Actions
{
private:
	int dir = 0;
	std::string input;
	std::map<int, Directions> currentDirection;
	Common common;
public:

	void execute(Action A);
	Directions parseDirections(int c, Room currentRoom);
	void move(int x, int y);
	void help();
};

