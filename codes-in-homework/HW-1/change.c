//
// Created by 33065 on 2022/10/3.
//

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int n50,n20,n10,n5,n1;
    n50=n/50;
    n%=50;
    n20=n/20;
    n%=20;
    n10=n/10;
    n%=10;
    n5=n/5;
    n%=5;
    n1=n;

    printf("%d\n%d\n%d\n%d\n%d\n",n50,n20,n10,n5,n1);

    return 0;
}