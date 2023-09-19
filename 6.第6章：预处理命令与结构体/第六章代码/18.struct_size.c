/*************************************************************************
	> File Name: 18.struct_size.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

void set_buff(char *buff, void *head, void *begin, void *end, char ch) {
    while (begin != end) {
        buff[begin - head] = ch;
        begin += 1;
    }
    return ;
}

#ifdef STRUCT_A
#define TYPE struct A

struct A {
    char  a;
    int   b;
    short c;
};

void output_struct() {
    int n = sizeof(TYPE), len = 0;
    char buff[n];
    for (int i = 0; i < n; i++) buff[i] = '.';
    for (int i = 0; i < n; i++) {
        len += printf("%3d", i);
    }
    printf("\n");
    for (int i = 0; i < len; i++) printf("-");
    printf("\n");
    TYPE hug;
    set_buff(buff, &hug.a, &hug.a, 1 + (void *)&hug.a, 'a');
    set_buff(buff, &hug.a, &hug.b, 4 + (void *)&hug.b, 'b');
    set_buff(buff, &hug.a, &hug.c, 2 + (void *)&hug.c, 'c');
    for (int i = 0; i < n; i++) {
        printf("%3c", buff[i]);
    }
    printf("\n");
    return ;
}

#endif

#ifdef STRUCT_B
#define TYPE struct B

struct B {
    char  a;
    short b;
    int   c;
};

void output_struct() {
    int n = sizeof(TYPE), len = 0;
    char buff[n];
    for (int i = 0; i < n; i++) buff[i] = '.';
    for (int i = 0; i < n; i++) {
        len += printf("%3d", i);
    }
    printf("\n");
    for (int i = 0; i < len; i++) printf("-");
    printf("\n");
    TYPE hug;
    set_buff(buff, &hug.a, &hug.a, 1 + (void *)&hug.a, 'a');
    set_buff(buff, &hug.a, &hug.b, 2 + (void *)&hug.b, 'b');
    set_buff(buff, &hug.a, &hug.c, 4 + (void *)&hug.c, 'c');
    for (int i = 0; i < n; i++) {
        printf("%3c", buff[i]);
    }
    printf("\n");
    return ;
}

#endif

#ifdef STRUCT_C
#define TYPE struct C
#pragma pack(1)

TYPE {
    char  a;
    short b;
    int   c;
};

void output_struct() {
    int n = sizeof(TYPE), len = 0;
    char buff[n];
    for (int i = 0; i < n; i++) buff[i] = '.';
    for (int i = 0; i < n; i++) {
        len += printf("%3d", i);
    }
    printf("\n");
    for (int i = 0; i < len; i++) printf("-");
    printf("\n");
    TYPE hug;
    set_buff(buff, &hug.a, &hug.a, 1 + (void *)&hug.a, 'a');
    set_buff(buff, &hug.a, &hug.b, 2 + (void *)&hug.b, 'b');
    set_buff(buff, &hug.a, &hug.c, 4 + (void *)&hug.c, 'c');
    for (int i = 0; i < n; i++) {
        printf("%3c", buff[i]);
    }
    printf("\n");
    return ;
}

#endif

int main() {
    output_struct();
    return 0;
}
