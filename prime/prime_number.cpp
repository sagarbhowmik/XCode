//
//  main.cpp
//  prime
//
//  Created by Sagar  Bhowmik on 9/8/18.
//  Copyright © 2018 Sagar  Bhowmik. All rights reserved.
//

#include <iostream>
using namespace std;

bool isPrime(int n) {
    bool prime = false;
    
    if (n <= 0 || n == 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n > 2 and n % 2 == 0) {
        return false;
    }
    else {
        for (int i = 3; i <= n;  i+=2) {
            if (n % i == 0) {
                if (!prime) {
                    prime = true;
                }
                else {
                    return false;
                }
            }
        }
        return true;
    }
}

int main(int argc, const char * argv[]) {
    int number = 101;
    for (int i = 0; i <= number; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
