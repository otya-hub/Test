#include "Character.h"
#include <iostream>

// なぜか今クラス追加したりできないから
// ここをプレイヤーの陣営を決める場とする

//  これで戦力を設定する
void Character::setattack()
{
	param_.warpower_ = (rand() % 51) + 50;
}
void Character::damage(int power)
{
	std::cout << "ダメージを受けました" << power << std::endl;
	param_.warpower_ -= power;

	if (param_.warpower_ < 0)
	{
		param_.warpower_ = 0;
	}
}
bool Character::Defeat() const
{
	return param_.warpower_ == 0;
}

int main()
{
	
}