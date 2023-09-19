/*************************************************************************
	> File Name: 13.log.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>

#define DEBUG 1
#define ERROR 2
#define FATEL 3
#define NO_LOG 4
#define LOG(level) \
if (level >= LOG_LEVEL) \
printf("[%s : %d] ", __FILE__, __LINE__), \
printf

int main() {
    int a = 123;
    printf("hello world\n");
    printf("a = %d\n", a);
    LOG(DEBUG)("hello world, DEBUG\n");
    LOG(ERROR)("hello world, ERROR\n");
    LOG(FATEL)("hello world, FATEL\n");
    LOG(DEBUG)("a = %d, DEBUG\n", a);
    LOG(ERROR)("a = %d, ERROR\n", a);
    LOG(FATEL)("a = %d, FATEL\n", a);
    return 0;
}
