#pragma once
#include <iostream>
#include <iomanip>
#include <string.h>
#include <vector>
#include "json.hpp"
#include "Flag.h"
#include "Items/ItemData.hpp"

enum Directions {N, S, E, W};

class Room
{

private:
	int ID; // Room ID


	std::vector<std::string> direct
	{
		"N",
		"S",
		"E",
		"W"
	}; 

	std::vector<std::string> action
	{
		"MOVE",
		"TALK",
		"OPEN",
		"CLOSE",
		"LOOK",
		"GET"
	};

	std::string roomName;
	std::string roomDescription; // A basic description of what's in the room when ? is used
	std::vector<int> avalibleDirections;
	std::vector<int> avalibleAction;

	std::map<Directions, int> connectedRooms;

	std::vector<ItemData> items;

public:

	int x, y;


	Room();
	Room(nlohmann::json r); // Construct based on room Data
	Room Create(nlohmann::json r);
	std::string GetDescription();
	std::string getAvalibleDirection(int id);
	std::string getAction(int id);
	std::vector<int> AvalibleDir(); // Avalible dir array
	~Room();
};

