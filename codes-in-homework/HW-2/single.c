//
// Created by 33065 on 2022/10/8.
//
#include <stdio.h>

#define NUM 1000005

int main()
{
    int n = 0;
    int a[NUM] = {0};

    scanf("%d",&n);

    for (int i = 1; i <= 2*n-1; i++){
        int x;
        scanf("%d",&x);
        a[x]++;
    }

    for (int i = 1; i < NUM; i++){
        if (a[i] == 1){
            printf("%d\n",i);
            break;
        }
    }

    return 0;
}