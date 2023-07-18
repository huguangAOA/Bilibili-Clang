/*************************************************************************
	> File Name: 34.HZOJ-141.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n + 1; i++) {
        int a_num = 2 * abs(i - n) + 1;
        int b_num = n - abs(i - n);
        char ch = 'A' + n;
        for (int j = 0; j < b_num; j++) printf(" ");
        for (int j = 0; j < a_num; j++) {
            printf("%c", ch - abs(j - a_num / 2));
        }
        printf("\n");
    }
    return 0;
}

