#pragma once

#include "../include/EnemyInterface.hpp"

class Boss: public EnemyInterface
{
private: 
    int HP;
    int attack_power;
    int defense;
public:
    Boss();
    ~Boss();
    void attack() override;
    void dodge() override;
    void transform();
};