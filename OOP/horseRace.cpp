#include "Horse.cpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace One;
using namespace std;


int main() {
    srand(time(0));
    Horse horse[5];
    bool raceContinue = true;
    
    for (int u = 0; u < 5; u++){
        horse[u].name = u;
    }
    
    while (raceContinue){
        cout << "\nENTER to continue: ";
        cin.ignore();
        for (int u = 0; u < 5; u++){
            if (horse[u].move((rand()%2)) == true){
                raceContinue = false;   
            }
        }
    }
    return 0;
}
