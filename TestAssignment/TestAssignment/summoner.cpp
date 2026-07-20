#include <iostream>
#include "summoner.h"

void summoner::setattack() {
	param_.attack_ = (rand() % 21) + 40;
}