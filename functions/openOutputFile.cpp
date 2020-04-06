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
