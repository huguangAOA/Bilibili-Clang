/*************************************************************************
	> File Name: 13.math.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    printf("pow(2, 3) = %lf\n", pow(2.0, 3.0));
    printf("sqrt(2) = %lf\n", sqrt(2));
    printf("ceil(4.01) = %lf\n", ceil(4.01));
    printf("floor(4.99) = %lf\n", floor(4.99));
    printf("abs(-65) = %d\n", abs(-65));
    printf("fabs(-65.6) = %lf\n", fabs(-65.6));
    printf("acos(-1) = %lf\n", acos(-1));
    return 0;
}
