/*************************************************************************
	> File Name: 8.fseek_and_faccess.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>

// 01abc56789
void r_plus_access() {
    FILE *fp = fopen("data5.txt", "r+");
    fseek(fp, 5, SEEK_SET);
    int n;
    fscanf(fp, "%d", &n);
    printf("r+ : n = %d\n", n); // 56789
    fseek(fp, 6, SEEK_SET);
    fprintf(fp, "876");
    fclose(fp);
    return ;
}

void w_plus_access() {
    FILE *fp = fopen("data8.txt", "w+");
    fprintf(fp, "hello world123456abc7890");
    fseek(fp, -4, SEEK_END);
    int n;
    fscanf(fp, "%d", &n);
    printf("w+ : n = %d\n", n); // 7890
    fseek(fp, 12, SEEK_SET);
    fprintf(fp, "xyz");
    fclose(fp);
    return ;
}

void a_plus_access() {
    FILE *fp = fopen("data8-2.txt", "a+");
    fprintf(fp, "1234567890");
    fseek(fp, 0, SEEK_SET);
    fprintf(fp, "0987654321"); // ??????
    fseek(fp, 0, SEEK_SET);
    int n;
    fscanf(fp, "%4d", &n);
    printf("a+ : n = %d\n", n); // 1234 ?? 987
    fclose(fp);
    return ;
}

int main() {
    // r_plus_access();
    // w_plus_access();
    a_plus_access();
    return 0;
}
