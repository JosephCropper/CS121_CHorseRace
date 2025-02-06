#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

inline void printTrack(int horseName, int horsePosition){
    cout << "\n";
    for (int u = 0; u < horsePosition; u++){
        cout << ".";
    }
    cout << horseName;
    for (int u = horsePosition; u < 14; u++){
        cout << ".";
    }
}// this is more effective speed-wise (i am aware it is in miniscule amounts of time that do not matter.) than using an if statement in a for loop.

inline bool checkWin(int horseName, int horsePosition, bool raceStats){
    if (horsePosition == 15){
        cout << "\n"; cout << horseName; cout << " has won!";
        return false;
    }
    return raceStats;
}

int main() {
    srand(time(0));
    int horsePos[5] = {0, 0, 0, 0, 0};
    bool raceContinue = true;
    
    while (raceContinue){
        cout << "\nENTER to continue: ";
        cin.ignore();
        for (int u = 0; u < 5; u++){
            if (rand()%2 == 1){
                horsePos[u]++; //Why would this need to be a function
                raceContinue = checkWin(u, horsePos[u], raceContinue);
            }//ifHorseMove
            printTrack(u, horsePos[u]);
        }//For(u {0-4})
    }//while(raceContinue)
    return 0;
}//Main
