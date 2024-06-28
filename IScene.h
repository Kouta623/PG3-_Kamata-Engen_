#pragma once

enum SCENE { TITLE, STAGE, CLEAR };
class IScene
{
protected:
	//シーン番号を管理する変数
	static int scnenNo;
public:
	//継承先で実装される関数
	//純粋仮想関数
	virtual void Init() = 0;
	virtual void Update(char* Keys, char *preKeys) = 0;
	virtual void Draw() = 0;

	//仮想ディストラクタ
	virtual ~IScene();

	//シーン番号ゲッター
	int GetSceneNo();
	};

