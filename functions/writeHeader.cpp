void writeHeader(ofstream& outFile, int numNames, int numScores)
{
    outFile << "*********************\n"
            << "**  GOLFER REPORT  **\n"
            << "*********************\n"
            << "Number of golfers processed: " << numNames
            << endl << "Number of scores processed: " << numScores << endl;
}
