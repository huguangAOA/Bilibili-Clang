/*************************************************************************
	> File Name: 2.file_access.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void r_access() { 
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("r : failed to open file\n");
        exit(1);
    }
    char s[100];
    fscanf(fp, "%[^\n]", s);
    printf("s = %s\n", s);
    fclose(fp);
    fp = fopen("temp.txt", "r");
    if (fp == NULL) {
        printf("r : failed to open file\n");
    }
    return ;
}

void rand_file_name(char *file_name, int n) {
    for (int i = 0; i < n; i++) {
        file_name[i] = rand() % 26 + 'a';
    }
    file_name[n] = 0;
    strcat(file_name, ".txt");
    return ;
}

void w_access() {
    FILE *fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("w : failed to open file\n");
        exit(1);
    }
    fprintf(fp, "hahahah , world\n");
    fprintf(fp, "hello hangzhou\n");
    fclose(fp);
    char file_name[100] = {0};
    rand_file_name(file_name, 10);
    printf("w : open file %s\n", file_name);
    fp = fopen(file_name, "w");
    fclose(fp);
    return ;
}

void r_plus_access() {
    FILE *fp = fopen("data.txt", "r+");
    if (fp == NULL) {
        printf("r+ : failed to open file\n");
        exit(1);
    }
    char s[100];
    fscanf(fp, "%s", s);
    printf("r+ : s = %s\n", s);
    fprintf(fp, "000000");
    fclose(fp);
    fp = fopen("temp.txt", "r+");
    if (fp == NULL) {
        printf("r+ : failed to open file\n");
    }
    return ;
}

void w_plus_access() {
    FILE *fp = fopen("data.txt", "w+");
    if (fp == NULL) {
        printf("w : failed to open file\n");
        exit(1);
    }
    fprintf(fp, "w+hahahah , world\n");
    char s[100] = {0};
    fscanf(fp, "%s", s);
    printf("w+ : s = %s\n", s);
    fclose(fp);
    char file_name[100] = {0};
    rand_file_name(file_name, 10);
    printf("w+ : open file %s\n", file_name);
    fp = fopen(file_name, "w+");
    fclose(fp);
    return ;
}

int main() {
    srand(time(0));
    r_access();
    w_access();
    r_plus_access();
    w_plus_access();
    return 0;
}
