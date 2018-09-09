//
//  main.cpp
//  home
//
//  Created by Sagar  Bhowmik on 9/5/18.
//  Copyright © 2018 Sagar  Bhowmik. All rights reserved.
//

//#include <iostream>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char my_string[] = "Hello SagarB";
    int my_int = 123;
    int my_matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout<<my_string<<"---"<<my_int<<endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<my_matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

