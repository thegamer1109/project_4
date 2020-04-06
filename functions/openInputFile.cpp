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
