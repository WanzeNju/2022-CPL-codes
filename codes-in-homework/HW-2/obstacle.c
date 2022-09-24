//
// Created by 33065 on 2022/10/8.
//
#include <stdio.h>

int main()
{
    int x_a = 0;
    int y_a = 0;
    int x_b = 0;
    int y_b = 0;
    int x_c = 0;
    int y_c = 0;

    int dir_x;//direction
    int dir_y;//direction

    int num_step = 0;

    int width = 0;//x
    int length = 0;//y

    int min_x;
    int max_x;
    int min_y;
    int max_y;

    char step_x[2] = {'L','R'};
    char step_y[2] = {'D','U'};

    scanf("%d%d%d%d%d%d",&x_a,&y_a,&x_b,&y_b,&x_c,&y_c);

    dir_x = x_a > x_b ? 0 : 1;
    dir_y = y_a > y_b ? 0 : 1;
    min_x = x_a > x_b ? x_b : x_a;
    max_x = x_a > x_b ? x_a : x_b;
    min_y = y_a > y_b ? y_b : y_a;
    max_y = y_a > y_b ? y_a : y_b;
    width = x_a > x_b ? x_a - x_b : x_b - x_a;
    length = y_a > y_b ? y_a - y_b : y_b - y_a;

    if ((x_a == x_b) && (x_b == x_c) && (y_c > min_y) && (y_c < max_y)){
        num_step = width + length + 2;
        printf("%d\n",num_step);

        printf("%c",step_x[dir_x]);
        for (int i = 1; i <= length; i++)
            printf("%c",step_y[dir_y]);
        printf("%c",step_x[!dir_x]);
    } else if ((y_a == y_b) && (y_b == y_c) && (x_c > min_x) && (x_c < max_x)){
        num_step = width + length + 2;
        printf("%d\n",num_step);

        printf("%c",step_y[dir_y]);
        for (int i = 1; i <= width; i++)
            printf("%c",step_x[dir_x]);
        printf("%c",step_y[!dir_y]);
    } else {
        num_step = width + length;
        printf("%d\n",num_step);

        if ((y_c == y_a) || (x_c == x_b)) {
            for (int i = 1; i <= length; i++)
                printf("%c",step_y[dir_y]);
            for (int i = 1; i <= width; i++)
                printf("%c",step_x[dir_x]);
        } else {
            for (int i = 1; i <= width ; i++)
                printf("%c",step_x[dir_x]);
            for (int i = 1; i <= length; i++)
                printf("%c",step_y[dir_y]);
        }
    }
    printf("\n");

    return 0;
}