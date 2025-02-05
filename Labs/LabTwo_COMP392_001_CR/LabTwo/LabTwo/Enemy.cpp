#include "Enemy.h"
using namespace std;

Enemy::Enemy(std::string n, int h, int ap) : name(n), health(h), attack_power(ap) {}

void Enemy::take_damage(int damage) {
    health -= damage;
    cout << name << " takes " << damage << " damage. Health left: " << health << std::endl;
}

bool Enemy::is_defeated() {
    return health <= 0;
}

Enemy::~Enemy() {}

void Enemy::print_status() {
    cout << name << " [Health: " << health << ", Attack Power: " << attack_power << "]" << std::endl;
}
