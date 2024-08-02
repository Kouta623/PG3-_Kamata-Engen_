#include "Enemy.h"

Enemy::~Enemy()
{
}

Enemy::Enemy()
{
}

void Enemy::Init()
{
	pos_ = { 100,100 };
}

void Enemy::Update()
{
	Move();
}

void Enemy::Draw()
{
	Novice::DrawBox((int)pos_.x, (int)pos_.y, (int)size_, (int)size_, 0.0f, RED, kFillModeSolid);
}

void Enemy::Move()
{
	pos_.x += speed_;
	if (pos_.x > 1280 - size_) {
		speed_ *= -1;
	}

	if (pos_.x < 0) {
		speed_ *= -1;

	}
}

