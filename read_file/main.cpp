//
//  main.cpp
//  read_file
//
//  Created by Sagar  Bhowmik on 9/9/18.
//  Copyright © 2018 Sagar  Bhowmik. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/* A method to print the last N lines of an input file */
void printLastNLines(char *filename, int N) {
    const int K = N;
    ifstream file (filename);
    string L[K];
    int size = 0;
    string line;
    /* read file line by line into circular array */
    /* peek() so an EOF following a line ending iss not considered a seperate line */
    while (getline(file, L[size % K])) {
        getline(file, line);
        cout << line << endl;
        size++;
    }
    /* compute start of circular array, and the size of it */
    int start = size > K ? (size % K) : 0;
    int count = min(K, size);
    /* print elements in the order they were added */
    for (int i = 0; i < count; i++) {
        cout << L[(start + i) % K] << endl;
    }
}
int main() {
    string filename = "test.txt";
    printLastNLines(&filename[0], 5);
    return 0;
}
