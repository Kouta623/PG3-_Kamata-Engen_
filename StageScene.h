#pragma once
#include"IScene.h"
//#include "dinput.h"
#include"Novice.h"
#include "Player.h"
#include "InputHandle.h"
#include "comand.h"


class StageScene :public IScene
{
private:
	InputHandle* inputHandle_ = nullptr;
	IComand* iCommand_ = nullptr;
	Player* player_ = nullptr;

public:
	StageScene();
	void Init()override;
	void Update(char* Keys, char *preKeys)override;
	void Draw()override;
};

