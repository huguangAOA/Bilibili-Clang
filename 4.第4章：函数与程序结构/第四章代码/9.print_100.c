/*************************************************************************
	> File Name: 9.print_100.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

void print(int n) {
    if (n == 1) {
        printf("%d\n", n);
        return ;
    }
    print(n - 1);
    printf("%d\n", n);
    return ;
}

int cnt = 10;

int main() {
    int n = cnt;
    cnt -= 1;
    if (n == 1) {
        printf("main : %d\n", n);
        return 0;
    }
    main();
    printf("main : %d\n", n);
    return 0;
}
