#include "player.h"
#include <iostream>

using namespace std;

Player::Player() {
    string name;
    std::cout << "Hello player, please enter your name: ";
    std::cin >> name;
    _name = name;
}
