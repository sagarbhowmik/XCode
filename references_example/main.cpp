//
//  main.cpp
//  references_example
//
//  Created by Sagar  Bhowmik on 9/9/18.
//  Copyright © 2018 Sagar  Bhowmik. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    /*
     A reference is another name for a pre existing object and it does not have memory of its own.
     */
    int a = 5;
    int &b = a;
    int *p_a = &a;
    
    cout << a << endl; //prints 5
    cout << b << endl; // prints 5
    cout << *p_a << endl; //prints 5
    
    b = 7;
    cout << a << endl; //prints 7
    cout << b << endl; // prints 7
    cout << *p_a << endl; //prints 7
    
    *p_a = 8;
    cout << a << endl; //prints 8
    cout << b << endl; // prints 8
    cout << *p_a << endl; //prints 8
    return 0;
}
