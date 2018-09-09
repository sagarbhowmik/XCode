//
//  main.cpp
//  reverse_integer
//
//  Created by Sagar  Bhowmik on 9/9/18.
//  Copyright © 2018 Sagar  Bhowmik. All rights reserved.
//

#include <iostream>
using namespace std;

/* Given a 32-bit signed integer, reverse digits of an integer.
 Example 1:
 Input: 123
 Output: 321
 
 Example 2:
 Input: -123
 Output: -321
 
 Example 3:
 Input: 120
 Output: 21
 
 Note:
 Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
 */
int reverse_int(int integer) {
    int rev_int = 0;
    bool is_positive = true;
    int quotient = integer, remainder = 0;
    if (integer < 0) {
        is_positive = false;
        quotient = abs(integer);
    }
    while (quotient != 0) {
        remainder = quotient % 10;
        rev_int = rev_int * 10 + remainder;
        quotient /=  10;
    }
    return (is_positive ? rev_int : (-1 * rev_int));
}
int main() {
    cout << reverse_int(-120) << endl;
    return 0;
}
