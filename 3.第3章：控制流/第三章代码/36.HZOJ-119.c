/*************************************************************************
	> File Name: 36.HZOJ-119.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int is_leap_year(int y) {
    return (y % 4 == 0 && y % 100) || (y % 400 == 0);
}

int days(int y, int m) {
    switch (m) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28 + is_leap_year(y);
    }
    return 0;
}

void output_pre_day(int y, int m, int d) {
    d -= 1;
    if (d == 0) m -= 1;
    if (m == 0) y -= 1;
    if (m == 0) m = 12;
    if (d == 0) d = days(y, m);
    printf("%d %d %d\n", y, m, d);
    return ;
}

void output_next_day(int y, int m, int d) {
    d += 1;
    if (d > days(y, m)) m += 1, d = 1;
    if (m == 13) y += 1, m = 1;
    printf("%d %d %d\n", y, m, d);
    return ;
}

int main() {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    output_pre_day(y, m, d);
    output_next_day(y, m, d);
    return 0;
}
