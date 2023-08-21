/*************************************************************************
	> File Name: 12.HZOJ-145.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char s[105], t[105];
    int s_len, t_len = -1;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        s_len = strlen(s);
        if (s_len > t_len) {
            strcpy(t, s);
            t_len = s_len;
        }
    }
    printf("%s\n", t);
    return 0;
}
