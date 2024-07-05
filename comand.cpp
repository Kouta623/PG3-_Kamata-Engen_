#include "comand.h"

IComand::~IComand()
{
}

void MoveRightComand::Exec(Player& player)
{
	player.MoveRight();
}

void MoveLeftComand::Exec(Player& player)
{
	player.MoveLeft();
}
