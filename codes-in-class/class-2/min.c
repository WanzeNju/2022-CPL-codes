//
// Created by 33065 on 2022/10/7.
//
//Undefined Behaviours      UBs
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;

    scanf("%d%d",&a,&b);

    int min = 0;

    if (a >= b) {
        min = b;
    } else {
        min = a;
    }

//    min = a >= b ? b : a;//try to use less

    printf("%d",min);
    //Do not be too clever when coding
/*
    if (a > b){
        if () {

        } else {

        }
    } else {//try to code it first when there is too much if/else

    }
*/

    return 0;
}
