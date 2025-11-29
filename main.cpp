#include <iostream>
#include <vector>
#include <string>


using namespace std;

vector<string> readLine(string fileName) { //читает из текстового файла набор строк в вектор (функция № 1)
    return vector<string>();
}

void printLine(vector<string> lines) { //выводит эти строки на экран (функция № 2)

}

void writeToFile(vector<string> lines, string fileName) { //записывает их файл (функция № 3)

}

int main()
{
    vector<string> lines = readLine("inFile");
    printLine(lines);
    writeToFile(lines, "outFile.txt");
}
