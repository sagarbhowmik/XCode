//
//  main.cpp
//  pointers_example
//
//  Created by Sagar  Bhowmik on 9/9/18.
//  Copyright © 2018 Sagar  Bhowmik. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    /*
     A pointer holds the addres of a variable and can be used to perform any operation that could be directly done on the variable, such as accessing and modifying it.
     */
    int *p = new int;
    *p = 7;
    int *q = p;
    *p = 8;
    cout << *q << endl; // prints 8
    cout << sizeof(p) << endl;
    
    int *a = new int[3];
    a[0] = 0;
    a[1] = 5;
    a[2] = 2;
    cout << *a << endl; // prints a[0]
    a++; // it skips ahead by sizeof(int) bytes, such that code outputs the value stored in a[1]. Had a been of different type, it would skip ahead as many bytes as the size of the data structure.
    cout << *a << endl; // prints a[1]
    a++;
    cout << *a << endl; //prints a[2]
    return 0;
}
