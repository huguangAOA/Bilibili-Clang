/*************************************************************************
	> File Name: 23.HZOJ-101.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    char s[10];
    scanf("%s", s); // 999, s[0]='9',s[1]='9',s[2]='9',s[3]='\0'
    int a = 0, b = 0, c = 0, d = 0;
    sscanf(s, "%1d%1d%1d%1d", &a, &b, &c, &d);
    printf("%d\n", a + b + c + d);
    return 0;
}
