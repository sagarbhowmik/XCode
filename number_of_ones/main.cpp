//
//  main.cpp
//  number_of_ones
//
//  Created by Sagar  Bhowmik on 9/9/18.
//  Copyright © 2018 Sagar  Bhowmik. All rights reserved.
//

#include <iostream>
using namespace std;

void bin(uint32_t n)
{
    uint32_t i;
    for (i = 1 << 31; i > 0; i = i / 2) {
        (n & i) ? cout << "1" : cout << "0";
    }
    cout << endl;
}

int hamming_weight(uint32_t n) {
    int count = 0;
    for (uint32_t i = 1 << 31; i > 0; i = i / 2) {
        if (n & i) count++;
    }
    return count;
}

int main() {
    cout << hamming_weight(7) << endl;
    return 0;
}
