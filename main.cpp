#include <iostream>

#include "functions_2_3.h"

#include <vector>
#include <string>
#include <fstream>


using namespace std;

vector<string> readLine(string fileName) { //÷èòàåò èç òåêñòîâîãî ôàéëà íàáîð ñòðîê â âåêòîð (ôóíêöèÿ ¹ 1)
    vector<string> lines;
    ifstream file(fileName);
    if (!file.is_open()) {
        cout << "Îøèáêà, ôàéë íå íàéäåí" << endl;
        return lines;
    }
    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }
    file.close();

    if (lines.empty()) {
        cout << "Ôàéë ïóñòîé" << endl;
    }
    else {
        cout << "Êîëè÷åñòâî ñòðîê: " << lines.size() << endl;
    }

    return lines;
}

void printLine(vector<string> lines) { //âûâîäèò ýòè ñòðîêè íà ýêðàí (ôóíêöèÿ ¹ 2)

}

void writeToFile(vector<string> lines, string fileName) { //çàïèñûâàåò èõ ôàéë (ôóíêöèÿ ¹ 3)

}

int main()
{

    cout << "Hello world!" << endl;
    cout << "\n ÐÑÐ·Ð¾Ð² ÑÑÐ½ÐºÑÐ¸Ð¸ 2" << endl;
function2();

cout << "\n ÐÑÐ·Ð¾Ð² ÑÑÐ½ÐºÑÐ¸Ð¸ 3" << endl;
function3();
    return 0;

    setlocale(LC_ALL, "Russian");
    vector<string> lines = readLine("inFile.txt");
    printLine(lines);
    writeToFile(lines, "outFile.txt");

}
