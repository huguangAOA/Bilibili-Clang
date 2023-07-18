/*************************************************************************
	> File Name: 7.test3.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    switch (n) {
        case 1: printf("one ");
        case 2: printf("two ");
        case 3: printf("three\n"); break;
        default: printf("error\n"); break;
    }
    return 0;
}
