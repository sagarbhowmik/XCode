//
//  main.cpp
//  string_ascii
//
//  Created by Sagar  Bhowmik on 9/9/18.
//  Copyright © 2018 Sagar  Bhowmik. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

char find_difference(string first, string second) {
    int ascii_first = 0, ascii_second = 0;
    for (char c : first) ascii_first += c;
    for (char c : second) ascii_second += c;
    return (char) (ascii_second - ascii_first);
}

int main() {
    cout << find_difference("sagar", "stagar") << endl;
    return 0;
}
