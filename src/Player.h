#pragma once
#include <iostream>
class Player
{
private:
	int x, y;
	int health; // Not sure if will be used
	std::string name = "Jeff";

public:
	void Move(int cordX, int cordY);

};

