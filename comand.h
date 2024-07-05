#pragma once
#include"Player.h"
class Player;

class IComand {

public:
	virtual ~IComand();
	virtual void Exec(Player& player) = 0;

};

class MoveRightComand :public IComand {
public:
	void Exec(Player& player) override;
};

class MoveLeftComand :public IComand {
public:
	void Exec(Player& player) override;
};