/*************************************************************************
	> File Name: 11.main_2.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[], char **env) {
    int flag = 0;
    for (char **p = env; p[0]; p += 1) {
        if (strcmp(p[0], "LOGNAME=guanghu1") == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("error log name, please use guanghu\n");
        return 0;
    }
    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}
