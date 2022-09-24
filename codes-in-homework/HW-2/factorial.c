//
// Created by 33065 on 2022/10/8.
//
#include <stdio.h>

#define mol 10007

int main()
{
    int n=0;
    int fac=1;
    int outcome=0;

    scanf("%d",&n);

    for (int i = 1; i <=n; i++){
        fac = (fac * i) % mol;
        outcome += fac;
    }
    outcome %= mol;

    printf("%d\n", outcome);

    return 0;
}