#pragma once

// キャラパラメータ
struct Parameter
{// HPと攻撃力を併せて戦力って言ってるわ。
	int attack_;
};
class Character
{// コンストラクタ
public:
	Character() = default;
	// デストラクタ(規定クラスなので仮想関数)
	virtual ~Character() = default;
public:
	virtual void setattack() = 0;

	int attack();

	void damage(int power);

	Parameter getParameter() const;

protected:
	Parameter param_;

};

