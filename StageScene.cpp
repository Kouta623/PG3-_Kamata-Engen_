#include "StageScene.h"

StageScene::StageScene()
{
}

void StageScene::Init()
{
	inputHandle_ = new InputHandle();
	inputHandle_->AssignMoveLeftCommand2PresskeyA();
	inputHandle_->AssignMoveRightCommand2PresskeyD();

	player_ = new Player();
	player_->Init();
}


void StageScene::Update(char* Keys, char *preKeys)
{
	iCommand_ = inputHandle_->HandleInput();
	if (this->iCommand_) {
		iCommand_->Exec(*player_);
	}

	player_->Update();

	if (preKeys[DIK_SPACE] == 0 && Keys[DIK_SPACE]) {
		scnenNo = CLEAR;
	}

}


void StageScene::Draw()
{
	
	Novice::ScreenPrintf(0, 0, "StageScene");
	player_->Draw();
}
