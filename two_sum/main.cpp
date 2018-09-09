//
//  main.cpp
//  two_sum
//
//  Created by Sagar  Bhowmik on 9/9/18.
//  Copyright © 2018 Sagar  Bhowmik. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
/* Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 
 You may assume that each input would have exactly one solution, and you may not use the same element twice.
 
 Example:
 
 Given nums = [2, 7, 11, 15], target = 9,
 
 Because nums[0] + nums[1] = 2 + 7 = 9,
 return [0, 1].
 */
vector<int> two_sum(vector<int> array, int target) {
    vector<int> indices;
    for (int i = 0; i < array.size() - 1; i++) {
        for (int j = i + 1; j < array.size(); j++) {
            if (array[i] + array[j] == target) {
                indices.push_back(i);
                indices.push_back(j);
                return indices;
            }
        }
    }
    return indices;
}


int main(int argc, const char * argv[]) {
    vector<int> array = {2, 7, 11, 15};
    int target = 9;
    vector<int> ret_array;
    ret_array = two_sum(array, target);
    for (int i = 0; i < ret_array.size(); i++) {
        cout << ret_array[i] << ' ';
    }
    cout << endl;
    return 0;
}
