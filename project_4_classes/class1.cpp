#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream inStream;
    inStream.open("class.txt");
    if(inStream.fail())
    {
        cout << "File failed to open\n";
        exit(1);
    }
    
    int numberOfNames;
    inStream >> numberOfNames; // 3
    
    int numScores;
    inStream >> numScores; // 4
    
    for(int i = 0; i < numberOfNames; ++i)
    {
        
        string name1;
        inStream >> name1;
    
        //cout << name1 << endl;
        int sum = 0;
        int max = -1;
        for (int j = 0; j < numScores; ++j)
        {
            int score;
            inStream >> score;
            
            if (score < 0)
            {
                continue;
            }
            
            if (score > max)
            {
                max = score;
            }
            
            sum += score;
        }
        cout << name1 << " sum of scores is " << sum - max << endl;
    }
    
    return 0;
}
