#include <iostream>
#include <vector>
#include <string>
#include "functions_2_3.h"

using namespace std;

void function2() {
    cout << "    Function 2    " << endl;
    
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "Processing of numerical data:" << endl;
    
    int sum = 0;
    for (int num : numbers) {
        cout << "Number: " << num << endl;
        sum += num;
    }
    cout << "The sum of the numbers: " << sum << endl;
}

void function3() {
    cout << "    Function 3    " << endl;

    vector<string> items = {"apple", "banana", "orange"};
    cout << "String data processing:" << endl;
    
    for (const auto& item : items) {
        cout << "Element: " << item << " (length: " << item.length() << ")" << endl;
    }
}
