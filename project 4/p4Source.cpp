#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

bool openInputFile(ifstream& inFile);
// opens input file
bool openOutputFile(ofstream& outFile);
// opens output file
processInputData(ifstream inFile);
// Calculates and filters scores
void writeHeader(ifstream& inFile, ofstream& outFile, int numNames,int numScores);
// writes the number of golfers and scores per golfer
void writeGolferInfo(ofstream& outFile, string name, double avg);
// writes data for a golfer to file
bool isValidScore(ifstream& inFile, int numScores, int numNames);
// checks to see if a score is valid
setMaxScore(int score);
// sets the max golf score

int main()
{
    ifstream inFile;
    ofstream outFile;

    bool isInFileOpen = openInputFile(inFile);
    if (!isInFileOpen)
    {
        cout << "File did not open.\n";
        exit(1);
    }

    bool isOutFileOpen = openOutputFile(outFile);
    if (!isOutFileOpen)
    {
        cout << "Out file did not open.\n";
        exit(1);
    }
    // return true;
    int numNames;
    inFile >> numNames; // 3

    int numScores;
    inFile >> numScores; // 5

    processInputData(inFile, outFile);

    return 0;
}

// openInputFile

// openOutputFile

// writeHeader

// isValidScore

// int maxScore = -1;
// numInvalidScore = 0;

// setMaxScore

// writeGolferInfo

// processInputData
