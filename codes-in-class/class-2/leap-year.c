//
// Created by 33065 on 2022/10/7.
//
#include <stdio.h>

int main() {
    int year = 0;

    scanf("%d", &year);

    int leap = 0;

    if (year % 4 != 0) {
        leap = 0;
    } else {
        if (year % 100 != 0) {
            leap = 1;
        } else {
            if (year % 400 != 0) {
                leap = 0;
            } else {
                leap = 1;
            }
        }
    }

//There are some other easier ways

/*
    if (year % 4 != 0) {
        leap = 0;
    } else if (year % 100 != 0) {
        leap = 1;//year % 4 == 0 and year % 100 != 0
    } else if (year % 400 != 0) {
        leap = 0;
    } else {
        leap = 1;//year % 400 == 0;It is year % 4 == 0 and year % 100 == 0 and year % 400 == 0 previously
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        leap = 1;
    } else {this code can be ignored
        leap = 0;
    }

    leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
 // && and || is Short-circuit Evaluation
*/

//print the answer
    if(leap) {
        printf("The year is a leap year");
    } else {
        printf("The year is not a leap year");
    }

    return 0;
}