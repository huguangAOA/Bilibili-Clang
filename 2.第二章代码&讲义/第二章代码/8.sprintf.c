/*************************************************************************
	> File Name: 8.sprintf.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    char str[100] = "192.168.1.245";
    int a, b, c, d;
    sscanf(str, "%d.%d.%d.%d", &a, &b, &c, &d);
    sprintf(str, "%d:%d:%d:%d", a, b, c, d);
    printf("str = %s\n", str);
    return 0;
}
