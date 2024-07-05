#include "Player.h"


Player::~Player()
{
}

Player::Player()
{

}

void Player::Init()
{
	pos_ = { 400,400 };
}

void Player::Update()
{
	
}


void Player::Draw()
{
	Novice::DrawBox((int)pos_.x, (int)pos_.y, 50, 50, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight()
{
	pos_.x += speed_;
}

void Player::MoveLeft()
{
	pos_.x -= speed_;
}
