/*************************************************************************
	> File Name: 1.stderr.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>

int main() {
    printf("hello world\n"); // stdout
    int n;
    scanf("%d", &n); // stdin
    perror("out of range\n"); // stderr
    return 0;
}
