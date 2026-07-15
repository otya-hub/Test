#pragma once

// キャラパラメータ
struct Parameter
{
	int hp_;
	int attack;
};
class Character
{// コンストラクタ
public:
	Character() = default;
	// デストラクタ(規定クラスなので仮想関数)
	virtual ~Character() = default;
public:
	virtual void setattack() = 0;
};

