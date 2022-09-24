//
// Created by 33065 on 2022/10/3.
//
#include <stdio.h>

int main()
{
    double m,R;
    const double G = 6.674e-11;
    const double M = 77.15;
    double F;

    scanf("%lf%lf",&m,&R);

    F = G*M*m/(R*R);

    printf("%.3e",F);

    return 0;
}
