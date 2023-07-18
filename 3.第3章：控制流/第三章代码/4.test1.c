/*************************************************************************
	> File Name: 4.test1.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) printf("HEHE\n");
    else if (n < 60) printf("FAIL\n");
    else if (n < 75) printf("MEDIUM\n");
    else if (n <= 100) printf("GOOD\n");
    return 0;
}
