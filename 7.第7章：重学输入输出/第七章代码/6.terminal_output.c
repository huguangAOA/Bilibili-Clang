/*************************************************************************
	> File Name: 6.terminal_output.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    freopen("/dev/ttys001", "w", stdout);
    char s[1000];
    while (scanf("%s", s) != EOF) {
        printf("from tty000 : %s\n", s);
    }
    return 0;
}
