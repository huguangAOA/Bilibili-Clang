/*************************************************************************
	> File Name: 10.HZOJ-144.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char str[105];
    scanf("%s", str);
    int cnt = 0;
    for (int i = 0, n = strlen(str); i < n; i++) {
        if (str[i] == 'A') cnt += 1;
    }
    printf("%d\n", cnt);
    return 0;
}
