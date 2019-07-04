#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream file;
    ofstream newFile;
    string fileName = "";
    string newfileName = "";


    fileName = "file.txt";
    newfileName = "newFile.txt";

    file.open(fileName);
    newFile.open(newfileName);


    /*
        Reading from the file line by line
    */

    string line;
    int cnt = 1;

    while(getline(file,line))
    {

        newFile << cnt++ << "\t" << line.c_str() << endl;
    }

    file.close();
    newFile.close();

}
