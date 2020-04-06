#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

//void printSomething();
//int addNumbers(int x, int y);

int main()
{
/*  
    int num1,num2;
    cin >> num1;
    cin >> num2;
    printSomething();
    cout << addNumbers(num1, num2);
*/

    ofstream functionsText("functions.txt");
    
    if(functionsText.is_open())
    {
        cout << "File is open.\n";
    }
    else
    {
        cout << "File failed to open.\n";
    }
    
    functionsText << "hello world!\n";
    functionsText.close();
    
    
    return 0;
}

/*
void printSomething()
{
    cout << "ooooo i am text on screen.\n";
}

int addNumbers(int x, int y)
{
    int answer = x+y;
    return answer;
}
*/

