#include <iostream>
#include "reference.h"

using namespace std;

void swap(int a, int b){
    int c=a;
    a=b;
    b=c;
}

void swapReference(int& a, int &b){
    int c=a;
    a=b;
    b=c;
}

void swapPointer(int* a, int* b){
    int c=*a;
    *a=*b;
    *b=c;
}

void testReference(){
    int x=10,y=6;
    swap(x,y);
    cout << x << " " << y << endl;
    swapReference(x,y);
    cout << x << " " << y << endl;
    swapPointer(&x,&y);
    cout << x << " " << y << endl;
}