void processInputData(ifstream& inFile, int numNames, int numScores);
{
    for(int i = 0; i < numNames; ++i)
    {

        string name;
        inFile >> name;
        cout << name << endl;
        for (int j = 0; j < numScores; ++j)
        {
            int score;
            inFile >> score;
            if (!numInvalidScore(score))
            {
                cout << name << " score of " << score << " is invalid.\n";
            }
        }
        writeGolferInfo(outFile, name, score);
    }
}
