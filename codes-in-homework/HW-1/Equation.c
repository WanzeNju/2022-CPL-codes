//
// Created by 33065 on 2022/10/3.
//
#include <stdio.h>
#include <math.h>

int main()
{
    double p,q,x,x1,x2;

    scanf("%lf%lf",&p,&q);

    x1=sqrt(q*q*0.25+p*p*p/27)-q*0.5;
    if(x1 > 0) x1=pow(x1,1.0/3);
    else x1=0-pow(-x1,1.0/3);

    x2=-sqrt(q*q*0.25+p*p*p/27)-q*0.5;
    if(x2 > 0) x2=pow(x2,1.0/3);
    else x2=0-pow(-x2,1.0/3);

    x = x1+x2;

    printf("%.3f",x);

    return 0;
}