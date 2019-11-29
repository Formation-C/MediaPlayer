#include "Player.h"

Player::Player()
{
    Setplaying(false);
    tracksList = new std::vector<std::string>();
    for (int i = 1; i <= 12; i++) {
        tracksList->push_back("Track " + std::to_string(i));
    }
}

Player::~Player()
{
    delete tracksList;
}
