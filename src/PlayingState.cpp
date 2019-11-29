#include "PlayingState.h"
#include "PausedState.h"
#include "StoppedState.h"

PlayingState::~PlayingState()
{
    //dtor
}

void PlayingState::onPlay()
{
    player->Setstate(new PausedState(player));
    std::cout << player->pausePlayback() << std::endl;
    delete this;
}

void PlayingState::onStop()
{
    player->Setstate(new StoppedState(player));
    std::cout << player->stopPlayback() << std::endl;
    delete this;
}
