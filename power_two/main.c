//
//  main.c
//  power_two
//
//  Created by Sagar  Bhowmik on 9/23/18.
//  Copyright © 2018 Sagar  Bhowmik. All rights reserved.
//
#define TRUE 1
#define FALSE 0
#include <stdio.h>
int isPrime(int *pNumber) {
    if (*pNumber < 2) {
        return  FALSE;
    }
    if (*pNumber == 2) {
        return TRUE;
    }
    if (*pNumber > 2 && *pNumber % 2 == 0) {
        return FALSE;
    }
    else {
        int primeFlag = 0;
        for (int i = 3; i <= *pNumber; i+=2) {
            if (*pNumber % i == 0) {
                if (!primeFlag) {
                    primeFlag = 1;
                }
                else {
                    return FALSE;
                }
            }
        }
        return TRUE;
    }
}
int main(int argc, const char * argv[]) {
    int number = 1000;
    //(isPrime(&number)) ? printf("%d is a prime number\n", number) : printf("%d is NOT a prime number\n", number);
    
    // print prime numbers upto number
    for (int i = 0; i <= number; i++) {
        if (isPrime(&i)) printf("%d ", i);
    }
    
    return 0;
}
