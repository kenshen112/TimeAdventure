#include "Player.h"

void Player::Move(int cordX, int cordY)
{
	if (cordX != 0)
	{
		x = cordX;
	}

	if (cordY != 0)
	{
		y = cordY;
	}
}