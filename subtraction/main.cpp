//
//  main.cpp
//  subtraction
//
//  Created by Sagar  Bhowmik on 9/9/18.
//  Copyright © 2018 Sagar  Bhowmik. All rights reserved.
//

#include <iostream>
using namespace std;

int subtract_without_operator(int a, int b) {
    /*
    int difference = a;
    int count = 1;
    while (count <= abs(b)) {
        // If allowed to use -- and ++
        if (b > 0) {
            difference--;
            count++;
        }
        else {
            difference++;
            count++;
        }
    }
    */
    int borrow = 0;
    while (b != 0) {
        borrow = ~a & b;
        a ^= b;
        b = borrow << 1;
    }
    return a;
}

int subtract_recursive_without_operator(int a, int b) {
    int borrow = 0;
    if (b == 0) return a;
    borrow = ~a & b;
    a ^= b;
    b = borrow << 1;
    return subtract_recursive_without_operator(a, b);
}

int main() {
    cout << subtract_without_operator(-3, -2) << endl;
    cout << subtract_recursive_without_operator(-3, -2) << endl;
    return 0;
}
