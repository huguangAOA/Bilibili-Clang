/*************************************************************************
	> File Name: 25.demo1.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    int *p = arr;
    for (int i = 0; i < 3; i++) {
        printf("%d\n", (i + 5)[&p[1] - 2]);
    }
    return 0;
}
