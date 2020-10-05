#include "Room.h"

Room::Room()
{
	/*ID = 0;
	x = 0, y = 0;
	roomName = "Default";
	roomDescription = "Ah, Adventurer it seems you have stumbled upon the Default room! How did you arrive here? No one knows";*/
}

Room::Room(nlohmann::json roomData)
{
	// Our Construction function. 
	roomName = roomData["roomName"].get<std::string>();
	roomDescription = roomData["roomDescription"].get<std::string>();
	avalibleDirections = roomData["avalibleDirections"].get<std::vector<int>>();
	avalibleAction = roomData["avalibleAction"].get<std::vector<int>>();
}


Room Room::Create(nlohmann::json roomData)
{
	// Our Construction function. 
	this->roomName = roomData["roomName"].get<std::string>();
	this->roomDescription = roomData["roomDescription"].get<std::string>();
	this->avalibleDirections = roomData["avalibleDirections"].get<std::vector<int>>();
	this->avalibleAction = roomData["avalibleAction"].get<std::vector<int>>();
	//this->connectedRooms = roomData["connectedRooms"].get<std::map<Directions, int>>();
	return *this;
}

std::string Room::GetDescription()
{
	if (roomDescription != " ")
	{
		return roomDescription;
	}
}

std::string Room::getAvalibleDirection(int ID)
{
	return direct[ID];
}

std::string Room::getAction(int ID)
{
	return action[ID];
}


std::vector<int> Room::AvalibleDir()
{
	return avalibleDirections;
}

Room::~Room()
{
	ID = 0;
	x = 0, y = 0;
	roomName = " ";
	roomDescription = " ";
}
