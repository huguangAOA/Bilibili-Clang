/*************************************************************************
	> File Name: 2.function.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int sum(int a, int b) {
    return a + b;
}

double select_function(int flag, double x) {
    switch (flag) {
        case 1: return sqrt(x);
        case 2: return x * x;
        default: printf("error flag\n"); break;
    }
    return 0;
}

void print_hello_world(int n) {
    for (int i = 0; i < n; i++) {
        printf("hello world\n");
    }
    return ;
}

int main() {
    printf("3 + 4 = %d\n", sum(3, 4));
    printf("sqrt(3) = %lf\n", select_function(1, 3));
    printf("4 * 4 = %lf\n", select_function(2, 4));
    print_hello_world(3);
    printf("------------\n");
    print_hello_world(5);
    return 0;
}
