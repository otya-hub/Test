#pragma once

// キャラパラメータ
struct Parameter
{// キャラは攻撃力のみ
	int attack_;
	// 一旦ここに戦力
	int warpower_;
	// じゃんけんの手みたいなのを設定したい(enum型は調べる)
	
};
enum Type_
{

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

	bool Defeat() const;

	Parameter getParameter() const;

protected:
	Parameter param_;

};

