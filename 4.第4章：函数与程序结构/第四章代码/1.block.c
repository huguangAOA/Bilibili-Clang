/*************************************************************************
	> File Name: 1.block.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    int a = 1, b = 2;
    for (int i = 0; i < 10; i++) {
        int a = 3, b = 4;
        printf("line 14: a = %d, b = %d\n", a, b);
    }
    printf("line 16: a = %d, b = %d\n", a, b);
    return 0;
}
