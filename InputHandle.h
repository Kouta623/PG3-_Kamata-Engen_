#pragma once
#include"comand.h"
#include<Novice.h>
class InputHandle
{
public:
	IComand* HandleInput();

	void AssignMoveRightCommand2PresskeyD();
	void AssignMoveLeftCommand2PresskeyA();

private:
	IComand* pressKeyD_;
	IComand* pressKeyA_;

};

