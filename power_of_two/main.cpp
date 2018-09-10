//
//  main.cpp
//  power_of_two
//
//  Created by Sagar  Bhowmik on 9/9/18.
//  Copyright © 2018 Sagar  Bhowmik. All rights reserved.
//

#include <iostream>
using namespace std;


bool is_power_of_two(int n) {
    if (n <= 0) return false;
    return ((n & n-1)==0);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    (is_power_of_two(n)) ? cout << n << " is a power of 2" << endl : cout << n << " is NOT a power of 2" << endl;
    bool ret = is_power_of_two(n);
    assert(ret);
    return 0;
}
