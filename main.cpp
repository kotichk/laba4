#include <iostream>
#include <vector>
#include <string>
#include <fstream>


using namespace std;

vector<string> readLine(string fileName) { //читает из текстового файла набор строк в вектор (функция № 1)
    vector<string> lines;
    ifstream file(fileName);
    if (!file.is_open()) {
        cout << "Ошибка, файл не найден" << endl;
        return lines;
    }
    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }
    file.close();

    if (lines.empty()) {
        cout << "Файл пустой" << endl;
    }
    else {
        cout << "Количество строк: " << lines.size() << endl;
    }

    return lines;
}

void printLine(vector<string> lines) { //выводит эти строки на экран (функция № 2)

}

void writeToFile(vector<string> lines, string fileName) { //записывает их файл (функция № 3)

}

int main()
{
    setlocale(LC_ALL, "Russian");
    vector<string> lines = readLine("inFile.txt");
    printLine(lines);
    writeToFile(lines, "outFile.txt");
}
