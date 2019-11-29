#include <iostream>
#include <algorithm>

#include "Player.h"

using namespace std;

//void displayTrackName(string trackName) {
//    cout << trackName << endl;
//}


int main()
{
    Player* player = new Player();
    for_each(
        player->GettracksList()->begin(),
        player->GettracksList()->end(),
//        displayTrackName
        [](string trackName) {
            cout << trackName << endl;
        }
    );

    string input;
    while (input != "exit") {
        cout << "Input command: ";
        cin >> input;
        cout << input << endl;
    }
    return 0;
}
