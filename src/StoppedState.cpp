#include "StoppedState.h"
#include "PlayingState.h"

StoppedState::~StoppedState()
{
    //dtor
}

void StoppedState::onPlay()
{
    player->Setstate(new PlayingState(player));
    std::cout << player->startPlayback() << std::endl;
    delete this;
}

void StoppedState::onStop()
{
    std::cout << "ERROR" << std::endl;
}
