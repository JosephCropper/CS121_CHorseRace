#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Horse{
    public:
        int name;
        int pos = 0;

        bool move(int flip){
            if (flip == 1){
                pos++;
                if (pos == 15){
                    printLane();
                    cout << "\n";
                    cout << name;
                    cout << " has won!";
                    return true;
                }
            }
            printLane();
            return false;
        }
        
        void printLane(){
            cout << "\n";
            for (int u = 0; u < pos; u++){
                cout << ".";
            }
            cout << name;
            for (int u = pos; u < 14; u++){
                cout << ".";
            }
        }
};

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
