//
//  main.cpp
//  reverse_string
//
//  Created by Sagar  Bhowmik on 9/8/18.
//  Copyright © 2018 Sagar  Bhowmik. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

string reverse(string input) {
    int string_length = input.length();
    int j = 0;
    for (int i = 0; i < string_length/2 ; i++) {
        j = string_length - i - 1;
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }
    return input;
}

void reverse_string_pointer(char *str) {
    if (str) {
        char temp;
        char *end = str;
        while (*end) {
            *end++;
        }
        *end--;
        while (str < end) {
            temp = *str;
            *str++ = *end;
            *end-- = temp;
        }
    }
}

int main() {
    string input_string;
    string reverse_string;
    cout << "Enter string: ";
    cin >> input_string;
    reverse_string = reverse(input_string);
    reverse_string_pointer(&input_string[0]);
    cout << "String reversed: " << reverse_string << endl;
    cout << "String reversed using pointer: " << input_string << endl;
    return 0;
}
