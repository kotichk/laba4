#include <iostream>
#include <vector>
#include <string>
#include "functions_2_3.h"

using namespace std;

void function2() {
    cout << "=== Функция 2 ===" << endl;
    
    // Временные данные для отладки
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "Обработка числовых данных:" << endl;
    
    int sum = 0;
    for (int num : numbers) {
        cout << "Число: " << num << endl;
        sum += num;
    }
    cout << "Сумма чисел: " << sum << endl;
}

void function3() {
    cout << "=== Функция 3 ===" << endl;
    
    // Временные данные для отладки
    vector<string> items = {"apple", "banana", "orange"};
    cout << "Обработка строковых данных:" << endl;
    
    for (const auto& item : items) {
        cout << "Элемент: " << item << " (длина: " << item.length() << ")" << endl;
    }
}
