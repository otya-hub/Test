#include "Character.h"
#include <iostream>

// 攻撃する
int Character::attack()
{
	std::cout << "攻撃します" << std::endl;
	return param_.attack_;
}

// パラメーターを返す（情報を教える）
Parameter Character::getParameter() const
{
	return param_;
}