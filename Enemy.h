#pragma once
#include <Novice.h>
#include"Vector2.h"
class Enemy
{
public:
	~Enemy();
	Enemy();

	void Init();
	void Update();
	void Draw();
	void Move();

private:
	Vector2 pos_{ };
	float speed_ = 7.0f;
	float size_ = 50.0f;

};

