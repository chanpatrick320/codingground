#include "pointer.h"
#include <iostream>
using namespace std;

void testPointer(){
    int arr[]={30,50,70,110,130};
    int* p=arr;
    
    cout << *p+3 << endl;
    cout << *(p+3) <<endl;
    cout << *p+2**p+3 << endl;
    cout << *(&p[4]-3)*p[1] << endl;
    
    int* q=p+3;
    cout << *(q+1) << endl;
    cout << *(q-2)%7 << endl;
    
}