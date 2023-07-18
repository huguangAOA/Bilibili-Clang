/*************************************************************************
	> File Name: 6.test2.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    char s[100];
    scanf("%[^\n]", s);
    int n;
    n = printf("%s", s);
    printf(" : %d\n", n);
    return 0;
}
