//
// Created by 33065 on 2022/10/8.
//
#include <stdio.h>

int main()
{
    int n = 0;
    int num_step = 0;
    int max = 1;

    scanf("%d",&n);

    max = n;

    for ( ; ; ){
        if (n == 1) break;
        if (n % 2 == 0){
            n /= 2;
        } else {
            n = 3*n+1;
            max = max < n ? n : max;
        }
        num_step++;
    }

    printf("%d %d",num_step,max);

    return 0;
}