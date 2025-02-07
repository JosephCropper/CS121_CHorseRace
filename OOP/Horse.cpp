#include "Horse.h"
#include <iostream>

using namespace One;
using namespace std;

int Horse::name;
int Horse::horsePos = 0;

bool Horse::move(int flip){
    if (flip == 1){
        pos++;
        if (pos == 15){
            cout << "\n"; cout << name; cout << " has won!";
            return true;
        }
    }
    printLane();
    return false;
}

void Horse::printLane(){
    cout << "\n";
    for (int u = 0; u < pos; u++){
        cout << ".";
    }
    cout << name;
    for (int u = pos; u < 14; u++){
        cout << ".";
    }
}