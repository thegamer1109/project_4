bool isValidScore(int numScores, int numNames)
{
    //between 50 and 130
    const int MIN_SCORE 50;
    const int MAX_SCORE 130;
    int score;
    for(int i = 0; i < numNames; ++i)
    {

        string name1;
        inFile >> name1;
        for (int j = 0; j < numScores; ++j)
        {
            inFile >> score;

            if (score > MAX_SCORE || score < MIN_SCORE)
            {
                return false;
                exit(1);
            }
            return true;
        }
    }
}
