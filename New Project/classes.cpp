#include <iostream>
#include "classes.h"
using namespace std;

Test::Test(char* name, int q){
    candidateName=name;
    score=0;
    questionCount=q;
    answers=new char[q];
    cout << "A" << endl;
}

Test::Test(int q){
    questionCount=q;
    score=0;
    answers=new char[q];
    cout << "B" << endl;
}

Test::Test(const Test& from){
    questionCount=from.questionCount;
    score=from.score;
    answers=new char[questionCount];
    for(int i=0;i<questionCount;i++){
        answers[i]=from.answers[i];
    }
    cout << "C" << endl;
}

Test::~Test(){
    delete[] answers;
    cout << "X" << endl;
}

void testClasses(){
    Test obj1;
    Test obj2=obj1;
    
    Test* ptr1=NULL;
    Test* ptr2=new Test(3);
    ptr1=ptr2;
    cout << "D" << endl;
    Test obj3=*ptr2;
    
    delete ptr1;
    char* name="P";
    Test obj4(name);
    cout << obj4.getCandidateName() << endl;
    ptr1=&obj4;
    cout << ptr1->getQuestionCount() << endl;
}