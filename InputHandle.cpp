#include "InputHandle.h"



void InputHandle::AssignMoveRightCommand2PresskeyD()
{
    IComand* command = new MoveRightComand();
    this->pressKeyD_ = command;
}

void InputHandle::AssignMoveLeftCommand2PresskeyA()
{
    IComand* command = new MoveLeftComand();
    this->pressKeyA_ = command;
}

IComand* InputHandle::HandleInput()
{
    if (Novice::CheckHitKey(DIK_D)) {
        return pressKeyD_;
    }
    if (Novice::CheckHitKey(DIK_A)) {
        return pressKeyA_;
    }

    return nullptr;
}