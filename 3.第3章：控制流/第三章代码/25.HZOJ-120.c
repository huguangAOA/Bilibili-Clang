/*************************************************************************
	> File Name: 25.HZOJ-120.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    int y, m, d, days;
    scanf("%d%d%d", &y, &m, &d);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 
        || m == 10 || m == 12) days = 31;
    else if (m == 4 || m == 6 || m == 9 || m == 11) days = 30;
    else days = 28 + ((y % 4 == 0 && y % 100) || (y % 400 == 0));
    if (m <= 0 || m >= 13 || d <= 0 || d > days) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }
    return 0;
}
