//
//  main.cpp
//  addition
//
//  Created by Sagar  Bhowmik on 9/9/18.
//  Copyright © 2018 Sagar  Bhowmik. All rights reserved.
//

#include <iostream>
using namespace std;

int add_without_operator(int a, int b) {
    int sum = a;
    while (b) {
        // If allowed to use ++ and --
        /*
        sum++;
        b--;
         */
        sum = a ^ b;
        b = (a & b) << 1;
        a = sum;
    }
    return sum;
}

int add_recursive_without_operator(int a, int b) {
    int sum = 0, carry = 0;
    if (b == 0) return a;
    sum = a ^ b;
    carry = (a&b) << 1;
    return add_recursive_without_operator(sum, carry);
}

int main() {
    cout << add_without_operator(-2, -3) << endl;
    cout << add_recursive_without_operator(-2, -3) << endl;
    return 0;
}
