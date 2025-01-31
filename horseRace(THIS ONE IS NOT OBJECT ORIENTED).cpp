#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void printTrack(int horseName, int horsePosition){
    cout << "\n";
    for (int u = 0; u < horsePosition; u++){
        cout << ".";
    }
    cout << horseName;
    for (int u = horsePosition; u < 14; u++){
        cout << ".";
    }
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
                horsePos[u]++;
                printTrack(u, horsePos[u]);
                if (horsePos[u] == 15){
                    cout << "\n";
                    cout << u;
                    cout << " has won!";
                    raceContinue = false;
                }
            }
            else{
                printTrack(u, horsePos[u]);
            }
        }
    }
    return 0;
}
