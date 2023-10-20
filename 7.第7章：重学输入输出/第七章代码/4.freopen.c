/*************************************************************************
	> File Name: 4.freopen.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>

int main() {
    freopen("output.txt", "w", stdout); // r, w
    freopen("input.txt", "r", stdin);
    printf("hello freopen, stdout\n");
    char s[1000];
    while (scanf("%[^\n]", s) != EOF) {
        getchar();
        printf("%s | hello world\n", s);
    }
    return 0;
}
