//
// Created by Wanze on 2022/10/3.
//
#include <stdio.h>
#include <math.h>

int main()
{
    double pi1,pi2;

    pi1=4.0*(4.0*atan(0.2)-atan(1.0/239.0));
    pi2=log(pow(640320.0,3.0)+744.0)/sqrt(163.0);

    printf("%.15f\n%.15f\n",pi1,pi2);

    return 0;
}