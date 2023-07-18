/*************************************************************************
	> File Name: 1.types.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int main() {
    int a = 123, b = 97, c, d;
    c = 100062;
    d = 9651;
    printf("%d %d %d %d\n", a, b, c, d);
    a = 2147483647 + 1;
    printf("%d\n", a);
    printf("INT32_MIN = %d\n", INT32_MIN);
    printf("INT32_MAX = %d\n", INT32_MAX);
    long long e;
    e = 2147483647 + 1LL;
    printf("%lld\n", e);
    float  f  = e + 0.1;
    double ff = e + 0.123456789;
    printf("float : %.9f\n", f);
    printf("double : %.9lf\n", ff);
    char g = 'a';
    printf("g = %c\n", g);
    printf("g(%%d) = %d\n", g);
    printf("g + 5 = %c\n", g + 5);
    printf("48 = %c\n", 48);
    printf("sizeof(int) = %lu\n", sizeof(int));
    printf("sizeof(long long) = %lu\n", sizeof(long long));
    printf("sizeof(float) = %lu\n", sizeof(float));
    printf("sizeof(double) = %lu\n", sizeof(double));
    printf("sizeof(char) = %lu\n", sizeof(char));
    return 0;
}
