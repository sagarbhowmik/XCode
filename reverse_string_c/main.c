//
//  main.c
//  reverse_string_c
//
//  Created by Sagar  Bhowmik on 9/20/18.
//  Copyright © 2018 Sagar  Bhowmik. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void reverseString(char* string) {
    char temp, *begin, *end;
    uint length = (uint) strlen(string);
    printf("Length of string = %d\n", length);
    begin = string;
    end = string;
    while (*end != '\0') {
        end++;
    }
    end--;
    /* normal reverse
    int i = 0, j = 0; // begin and end index
    for (i = 0; i < length / 2; i++) {
        j = length - 1 - i;
        temp = string[j];
        string[j] = string[i];
        string[i] = temp;
    }
    */
    /* using pointeres */
    for (int i = 0; i < length / 2; i ++) {
        temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}


int main() {
    char string1[256] = "sagar bhowmik";
    printf("String entered before calling reverse: %s\n", string1);
    reverseString(string1);
    printf("String after reverse function: %s\n", string1);
    return 0;
}

