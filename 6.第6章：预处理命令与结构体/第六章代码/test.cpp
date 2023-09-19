/*************************************************************************
	> File Name: test.cpp
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <vector>
using namespace std;

void test_func(int a = 97, int b = 111, double c = 12.3) {
    printf("a = %d, b = %d, c = %lf\n", a, b, c);
    return ;
}

int main() {
    test_func();
    test_func(1);
    test_func(1, 2);
    test_func(1, 2, 3);
    return 0;
}
