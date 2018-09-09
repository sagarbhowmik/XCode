//
//  main.cpp
//  fibonacci
//
//  Created by Sagar  Bhowmik on 9/9/18.
//  Copyright © 2018 Sagar  Bhowmik. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void fibonacci_series(int n) {
    vector<int> fibonacci_array;
    if (n == 1) cout << 0 << endl;
    if (n == 2) cout << 0 << " " << 1 << endl;
    if (n > 2) {
        fibonacci_array.push_back(0);
        fibonacci_array.push_back(1);
        int count = 2;
        int fib_next = 0;
        while (count < n) {
            fib_next = fibonacci_array[count - 1] + fibonacci_array[count -2];
            fibonacci_array.push_back(fib_next);
            count++;
        }
        for (int i = 0; i < fibonacci_array.size(); i++) {
            cout << fibonacci_array[i] << " ";
        }
        cout << endl;
    }
}

int fibonacci_recursive(int n) {
    if (n <= 1) return n;
    return fibonacci_recursive(n-1) + fibonacci_recursive(n-2);
}
int main() {
    int number;
    int count = 0;
    cout << "Enter number: ";
    cin >> number;
    cout << "Printing fibonacci numbers until " << number << endl;
    fibonacci_series(number);
    cout << "Using recursive function" << endl;
    while (count < number) {
        cout << fibonacci_recursive(count) << " ";
        count++;
    }
    cout << endl;
    return 0;
}
