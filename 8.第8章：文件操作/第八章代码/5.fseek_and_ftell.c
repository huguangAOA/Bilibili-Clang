/*************************************************************************
	> File Name: 5.fseek_and_ftell.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>

int main() {
    FILE *fp = fopen("data5.txt", "w");
    printf("ftell(fp) = %ld\n", ftell(fp)); // 0
    fprintf(fp, "0123456789");
    printf("after print 0123456789 ftell(fp) = %ld\n", ftell(fp)); // 10
    fseek(fp, 2, SEEK_SET);
    printf("after fseek(2) ftell(fp) = %ld\n", ftell(fp)); // 2
    fprintf(fp, "abc");
    printf("after print abc ftell(fp) = %ld\n", ftell(fp)); // 5
    return 0;
}
