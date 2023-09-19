/*************************************************************************
	> File Name: 9.string_cat.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

#define STR(n) #n
#define RUN(func) { \
    func; \
    printf("%s done\n", #func); \
}

void test1() {
    printf("this is test1\n");
    return ;
}

void test2(int a, int b) {
    printf("this is test2 : %d, %d\n", a, b);
    return ;
}

#define CAT(a, b) a##b

int main() {
    printf("%s\n", STR(hello));
    RUN(test1());
    RUN(test2(2, 3));
    int n10 = 123, n11 = 456;
    CAT(n, 10) = 789;
    printf("n10 = %d, n11 = %d\n", n10, n11);
    return 0;
}
