/*************************************************************************
	> File Name: 5.string.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    char t[10];
    for (int i = 0; i < 10; i++) t[i] = -1;
    scanf("%s", t);
    for (int i = 0; i < 10; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");
    char s[100] = "hello world";
    printf("%s\n", s);
    scanf("%s", s);
    printf("scanf s : %s\n", s);
    getchar(); // 吞掉空格
    scanf("%[a-zA-Z]", s);
    printf("%%[a-zA-Z] : %s\n", s);
    return 0;
}
