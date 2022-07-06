using namespace std;

#pragma once

#include "requirements.hpp"
#include "variables.hpp"


template<typename datatype, int size>
void printArray(array<datatype, size> arr, string seperator=", ", string end="\n") {
    unsign_short index = 0;
    for (datatype i : arr) {
        cout << i;
        if (index != (arr.size() - 1)) {
            cout << seperator;
        }
        index++;
    }
    cout << end;
}

float random(int min, int max, bool includeLast=false) {
    return (rand() % (max - min)) + min + (includeLast?1:0);
}

void BarPrint(int PrintObject){
    for(int i = 0;i < ceil(PrintObject / 10);i++){
        cout << "+";
    }
    cout << endl;
}

void showPlayerData(map<string, int> &userData) {
    cout << "Health     : " << userData["Health"] << endl;
    cout << "Damage     : " << userData["Damage"] << endl;
    cout << "CritRate   : " << userData["CritRate"] << endl;
    cout << "CritDamage : " << userData["CritDamage"] << endl;
    cout << "Speed      : " << userData["Speed"] << endl;
    cout << "Heal       : " << userData["Heal"] << endl;
}

void showEnemyData(map<string, int> &enemyData) {
    cout << "Health : " << enemyData["Health"] << endl; 
    cout << "Damage : " << enemyData["Damage"] << endl; 
    cout << "Heal   : " << enemyData["Heal"] << endl; 
}