#include <iostream>

#include "functions_2_3.h"

#include <vector>
#include <string>
#include <fstream>


using namespace std;

vector<string> readLine(string fileName) { //reads a set of lines into a vector from a text file (function #1)
    vector<string> lines;
    ifstream file(fileName);
    if (!file.is_open()) {
        cout << "File not found" << endl; //Russian is not displayed correctly
        return lines;
    }
    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }
    file.close();

    if (lines.empty()) {
        cout << "File is empty" << endl;
    }
    else {
        cout << "Number of lines: " << lines.size() << endl;
    }

    return lines;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    vector<string> lines = readLine("inFile.txt");

    cout << "Hello world!" << endl;
    cout << "\n ÐÑÐ·Ð¾Ð² ÑÑÐ½ÐºÑÐ¸Ð¸ 2" << endl;
    function2();

    cout << "\n ÐÑÐ·Ð¾Ð² ÑÑÐ½ÐºÑÐ¸Ð¸ 3" << endl;
    function3();


    //printLine(lines);
    //writeToFile(lines, "outFile.txt");

    return 0;
}
