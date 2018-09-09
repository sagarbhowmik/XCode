//
//  hello_world.cpp
//  cprograms
//
//  Created by Sagar  Bhowmik on 9/8/18.
//  Copyright © 2018 Sagar  Bhowmik. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

/* This is a multi line comment
 and this is the first program
 to print hello sagar, a string
 a matrix
 */

int main()
{
    cout << "Hello sagar\n" << endl;
    
    int matrix[2][4] = {{1,2,3,4}, {5,6,7,8}};
    
    string name = "Sagar Bhowmik";
    
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
    
    cout << name << endl;
    name.append(" is Indian");
    cout << name << endl;
    string sentence = name + " and a Bengali";
    cout << sentence << endl;
    
    cout << name.length() << endl;
    cout << sentence.length() << endl;
}
