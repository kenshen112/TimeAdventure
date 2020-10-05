#pragma once
#include <iostream>
#include "Room.h"
#include "Player.h"

enum Action {MOVE, TALK, OPEN, CLOSE, LOOK, GET, HELP};


struct Common
{
std::string possibleCommands[8]
{
	"Move",
	"Open",
	"Close",
	"Look",
	"Help",
	"Exit",
	"Talk",
    "Get"
};

std::string directions[4]
{
	"North",
	"South",
	"East",
	"West",
};

Room rooms[2][2];
Room currentRoom;

Player player;


};