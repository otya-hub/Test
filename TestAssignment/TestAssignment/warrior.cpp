#include <iostream>
#include "warrior.h"

void warrior::setattack()
{
	// ƒ‰ƒ“ƒ_ƒ€‚¶‚á‚È‚¢‚©‚à‚µ‚ê‚ñ
	param_.attack_ = (rand() % 21) + 50;
}