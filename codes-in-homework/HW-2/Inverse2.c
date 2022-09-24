//
// Created by 33065 on 2022/10/8.
//
#include <stdio.h>

#define NUM 10000005

char q[NUM];

int main()
{
    int n = 0;
    int k =0;
    char garbage;

    scanf("%d%c",&n,&garbage);
    for (int i = 0; i < n; i++)
        scanf("%c",&q[i]);
    scanf("%d",&k);

    for (int i = 0; i < k; i++){
        printf("%c",q[k-1-i]);
    }
    for (int i = 1; i < n-k+1; i++){
        printf("%c",q[n-i]);
    }

    return 0;
}