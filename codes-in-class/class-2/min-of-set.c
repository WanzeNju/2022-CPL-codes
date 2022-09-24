//
// Created by 33065 on 2022/10/7.
//
#include <stdio.h>

#define NUM 5 //This is just a ti huan guan xi

int main()
{
    /*
    * const int NUM = 5;
    * int numbers[NUM] = {34,43,56,89,21};array's wrong usage for we can't use
    */

    //int numbers[NUM] = {34,32,89,11,21};

    int numbers[NUM] = {0};
    //int numbers[] = {0} is not the meaning we want！
    //int numbers[] = {[2] = 1};
    //int numbers[] = {}; is wrong!
    //int numbers[];is right but garbage values
    for (int i = 0; i < NUM; i++){
        scanf("%d",&numbers[i]);
    }

    int min = numbers[0];
    //(1) []:subscript operator
    //(2) i < NUM not i <= NUM
    //(3) int i = 1;We can use it since C99


    for (int i = 1; i < NUM; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    //int i = 1 is the first step.{} is the third step.i++ is the last step.
    /*
     * something about i++:
     * (1) i++;++i;
     * (2) if we want i = i+2, we code i+=2 or just i = i+2.
     */
    printf("min = %d",min);

    return 0;
}