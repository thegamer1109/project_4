#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

bool openInputFile(ifstream& inFile);
bool openOutputFile(ofstream& outFile);
//ifstream processInputData();
//ofstream writeHeader();
//ofstream writeGolferInfo();
//int isValidScore();
//int setMaxScore();

int main()
{
    ifstream inFile;

    bool isInFileOpen = openInputFile(inFile);
    if (!isInFileOpen)
    {
        cout << "File did not open.\n";
        exit(1);
    }
    else
    {
        cout << "In file opened.\n";
    }

    ofstream outFile;

    bool isOutFileOpen = openOutputFile(outFile);
    if (!isOutFileOpen)
    {
        cout << "Out file did not open.\n";
        exit(1);
    }
    else
    {
        cout << "Out file opened.\n";
    }

    return 0;
}

bool openInputFile(ifstream& inFile)
{
    string inputInName;
    cout << "What file would you like me to read from > ";
    cin >> inputInName;

    inFile.open(inputInName);
    bool failedToOpen = inFile.fail();
    if (failedToOpen)
    {
        return false;
    }
    return true;
}

bool openOutputFile(ofstream& outFile)
{
    string inputOutName;
    cout << "What file would you like to write too > ";
    cin >> inputOutName;

    outFile.open(inputOutName);
    bool failedToOpen = outFile.fail();
    if (failedToOpen)
    {
        return false;
    }
    return true;
}
//{
//
//}
//
//ifstream processInputData()
//{
//
//}
//
//ofstream writeHeader()
//{
//
//}
//
//ofstream writeGolferInfo()
//{
//
//}
//
//int isValidScore()
//{
//
//}
//
//int setMaxScore()
//{
//
//}
