/*************************************************************************
	> File Name: 21.HZOJ-107.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 7 == 0 && n % 2 != 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
