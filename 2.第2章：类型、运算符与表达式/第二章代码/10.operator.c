/*************************************************************************
	> File Name: 10.operator.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>
#define PRINT(stmt, func) { \
    printf("%s\n", #stmt); \
    stmt; \
    func; \
}

int main() {
    int a = 5, b = 2, c = 7, d;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    PRINT(a = c, printf("a = %d, b = %d, c = %d\n", a, b, c));
    PRINT(d = a + c, printf("d = %d\n", d));
    PRINT(d = a - b, printf("d = %d\n", d));
    PRINT(d = a * b, printf("d = %d\n", d));
    PRINT(d = a / b, printf("d = %d\n", d));
    PRINT(d = (-a) / b, printf("d = %d\n", d));
    PRINT(d = a % b, printf("d = %d\n", d));
    return 0;
}
