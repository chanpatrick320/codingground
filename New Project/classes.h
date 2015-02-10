class Test{
private:
    int score;
    int questionCount;
    char* answers;
    char* candidateName;
public:
    Test(char* name, int q=10);
    Test(const Test& from);
    Test(int q=10);
    ~Test();
    void setAnswers(char* ans){
    answers=ans;
    }
    void setScore(int sc){
    score=sc;
    }
    int getQuestionCount(){
        return questionCount;
    }
    int getScore(){
        return score;
    }
    char* getAnswers(){
        return answers;
    }
    char* getCandidateName(){
        return candidateName;
    }
};

void testClasses();