#include <iostream>
#include "control.h"
#include "pointer.h"
#include "reference.h"
#include "classes.h"
using namespace std;

void printLine(){
    cout << endl;
}

int main()
{
    testControl();
    printLine();
    testPointer();
    printLine();
    testReference();
    printLine();
    testClasses();
    return 0;
}

