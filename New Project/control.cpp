#include "control.h"
#include <iostream>
using namespace std;

int getRepeatCount(int i){
    i++;
    return i*2-1;
}

char addIntegerToChar(char c, int d){
    return c+d;
}

void testControl(){
    bool firstBlock=false;
    if(firstBlock){
        cout << "apple" << endl;
    }else{
        cout << "alpha" << endl;
    }
    
    int second=3;
    if(second){
        cout << "bus" << endl;
    }else{
        cout << "boy" << endl;
    }
    
    int third=2;
    if(!(third>second)==false){
        cout << "cat" << endl;
    }else{
        cout << "cry" << endl;
    }
    
    for(int i=0;i<getRepeatCount(third);i++){
        cout << "!";
    }
    cout << endl;
    
    do{
        cout << "?";
    }while(third++==second);
    cout << endl;
    
    cout << addIntegerToChar('A',3) <<endl;
    
}