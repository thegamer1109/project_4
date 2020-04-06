#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main();
{
    int numGolfers, numScores, score, maxScore = 1, numInvalidScores = 0;
    string golferName;
    
    /*
    read number of golfers
    
    read number of scores per golfer
    
    print header - 
    */
    
    inStream >> score;
    
    numInvalidScores++;
    setMaxScore(score, maxScore /* int reference peram */); 
    
    
    return 0
}

void setMaxScore(int currentScore, int& maxScore)
{
    /*
    if currentSocore is greater than maxScore, then
    set maxScore to currentScore
    note: setting maxScore will change value of variable that
    */
}
