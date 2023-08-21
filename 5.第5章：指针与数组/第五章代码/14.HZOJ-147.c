/*************************************************************************
	> File Name: 14.HZOJ-147.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>
#include <string.h>

char s[10005];

int main() {
    scanf("%s", s);
    if (s[strlen(s) - 1] % 2) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }
    return 0;
}
