/*************************************************************************
	> File Name: 15.HZOJ-148.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char s[55];
    scanf("%s", s);
    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        s[i] ^= s[j]; // c = a ^ b
        s[j] ^= s[i]; // a = c ^ b
        s[i] ^= s[j]; // b = c ^ a
    }
    printf("%s\n", s);
    return 0;
}
