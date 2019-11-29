#include <iostream>
#include <algorithm>

#include "Player.h"

using namespace std;


int main()
{
    Player* player = new Player();
//    for_each(
//        player->GettracksList()->begin(),
//        player->GettracksList()->end(),
//        [](string trackName) {
//            cout << trackName << endl;
//        }
//    );

    string input;
    while (input != "exit") {
        cout << "Input command: ";
        cin >> input;

        if (input == "play") {
            player->Getstate()->onPlay();
        } else if (input == "stop") {
            player->Getstate()->onStop();
        } else if (input == "exit") {
        } else {
            cout << "Unknown command" << endl;
        }
    }
    return 0;
}
