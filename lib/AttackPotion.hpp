#include "Potion.hpp"
#pragma once

class AttackPotion: public Potion
{
private:
  int attack_bonus;

public:
  AttackPotion() : attack_bonus (5) {}
  void consume(Potion *potion){ delete potion; }
  ~AttackPotion();
};
