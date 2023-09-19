/*************************************************************************
	> File Name: define_test.h
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#ifndef _DEFINE_TEST_H
#define _DEFINE_TEST_H

#include <time.h>

#define DEBUG 1
#define ERROR 2
#define FATEL 3
#define NO_LOG 4
#define LOG(level)  \
if (level >= LOG_LEVEL) \
    printf("[%s : %d] ", __FILE__, __LINE__), \
    printf

#define TIME(func) { \
    long long b = clock(); \
    func; \
    long long e = clock(); \
    printf("%s run %lldms\n", #func, 1000 * (e - b) / CLOCKS_PER_SEC); \
}

#define D_VAL(a, val) (#a[0] ? a : val)
#define test_func(a, b, c) __test_func(D_VAL(a, 97), D_VAL(b, 111), D_VAL(c, 12.3))
void __test_func(int a, int b, double c) {
    printf("a = %d, b = %d, c = %lf\n", a, b, c);
    return ;
}

#endif
