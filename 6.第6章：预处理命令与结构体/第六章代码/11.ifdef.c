/*************************************************************************
	> File Name: 11.ifdef.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

#ifndef DEBUG
#define DEBUG
#endif

#ifdef DEBUG
int a = 1;
#else 
int a = 2;
#endif

int main() {
    printf("a = %d\n", a);

    return 0;
}
