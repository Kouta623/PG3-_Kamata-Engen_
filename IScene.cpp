#include "IScene.h"

//タイトルシーンで初期化
int IScene::scnenNo = TITLE;

//仮想ディストラクタ
IScene::~IScene()
{
}

int IScene::GetSceneNo()
{
	return scnenNo;
}
