/*************************************************************************
	> File Name: 8.string.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    srand(time(0));
    char str1[10] = "abc";
    printf("str1 = %s\n", str1);
    strcpy(str1, "def");
    printf("str1 = %s\n", str1);
    char str2[] = "hello\0 world"; // 13, 5, 6
    printf("strlen(str2) = %lu\n", strlen(str2));
    printf("sizeof(str2) = %lu\n", sizeof(str2));
    printf("str2 = %s\n", str2);
    str2[5] = 'A';
    printf("str2 = %s\n", str2);
    char str3[] = "abcdef", str4[] = "abc";
    printf("strcmp(str3, str4) = %d\n", strcmp(str3, str4));
    str3[3] = '\0'; // abc\0ef
    printf("strcmp(str3, str4) = %d\n", strcmp(str3, str4));

    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    memset(arr, 0, sizeof(int) * 10); // 40, sizeof(arr)
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    memset(arr, -1, sizeof(int) * 10); // 40, sizeof(arr)
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    memset(arr, 2, sizeof(int) * 10); // 40, sizeof(arr)
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d (%x)\n", i, arr[i], arr[i]);
    }
    return 0;
}
