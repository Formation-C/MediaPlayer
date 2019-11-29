#include "Player.h"

Player::Player()
{
    SetcurrentTrack(0);
    Setplaying(false);
    tracksList = new std::vector<std::string>();
    for (int i = 1; i <= 12; i++) {
        tracksList->push_back("Track " + std::to_string(i));
    }
    Setstate(new StoppedState(this));
}

Player::~Player()
{
    delete tracksList;
}

std::string Player::startPlayback() {
    return "Playing " + tracksList->at(currentTrack);
}

std::string Player::pausePlayback() {
    return "Paused " + tracksList->at(currentTrack);
}

std::string Player::stopPlayback() {
    currentTrack = 0;
    return "Stopped";
}

std::string Player::previousTrack() {
    currentTrack--;
    currentTrack %= tracksList->size();
    return "Playing " + tracksList->at(currentTrack);
}

std::string Player::nextTrack() {
    currentTrack++;
    currentTrack %= tracksList->size();
    return "Playing " + tracksList->at(currentTrack);
}
