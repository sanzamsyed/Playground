#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream file;
    string fileName = "";


    fileName = "file.txt";

    file.open(fileName);


    /*
        Reading from the file line by line
    */

    string line;

    while(getline(file,line))
    {
        printf("%s",line.c_str());
        cout << endl;
    }

    file.close();


    /*
        Reading from the file word by word
    */


    file.open(fileName.c_str());
    string word;

    while(file >> word)
    {
        cout << word << endl;
    }

    file.close();


}
