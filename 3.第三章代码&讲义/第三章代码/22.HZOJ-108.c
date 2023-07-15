/*************************************************************************
	> File Name: 22.HZOJ-108.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    char s[10];
    double n, m;
    scanf("%s", s);
    scanf("%lf%lf", &n, &m);
    printf("%.2lf\n", s[0] == 'r' ? m * n : m * n / 2.0);
    return 0;
}
