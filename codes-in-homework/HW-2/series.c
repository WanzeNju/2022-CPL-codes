//
// Created by 33065 on 2022/10/8.
//
#include <stdio.h>
#include <math.h>

int main()
{
    double x = 0;
    int n=0;
    double y = 0;

    scanf("%lf%d",&x,&n);

    //we calculate sum fist, then *4.
    for (int i = 0; i <= n; i++){
        if (i % 2 == 0){
            y = y + pow(x,2*i+1) / ((2*i+1)*1.0);
        } else {
            y = y - pow(x,2*i+1) / ((2*i+1)*1.0);
        }
    }
    y *=4;

    printf("%.10f",y);

    return 0;
}