/*************************************************************************
	> File Name: 15.goto.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    goto lab_1;
    printf("hello world\n");
lab_1:
    printf("hello hangzhou\n");
//--------------------//
    goto lab_2;
    int a = 0, b = 0;
    scanf("%d%d", &a, &b);
lab_2:
    printf("%d\n", a * b);
    return 0;
}
