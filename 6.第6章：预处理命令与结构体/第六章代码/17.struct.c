/*************************************************************************
	> File Name: 17.struct.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

struct A {
    char a;
    short b;
};

struct B {
    struct A a;
    struct {
        char b;
        double c;
    } d;
    int e;
};

typedef struct person {
    char name[20];
    int age;
    char gender;
    float height;
} person;

void output(struct person *p) {
    printf("use pointer p : (%s, %d, %c, %f)\n", 
        p->name, 
        p->age,
        p->gender,
        p->height
    );
    return ;
}

void set_buff(char *buff, void *head, void *begin, void *end, char ch) {
    while (begin != end) {
        buff[begin - head] = ch;
        begin += 1;
    }
    return ;
}

void output_person() {
    int n = sizeof(struct person), len = 0;
    char buff[n];
    for (int i = 0; i < n; i++) buff[i] = '.';
    for (int i = 0; i < n; i++) {
        len += printf("%3d", i);
    }
    printf("\n");
    for (int i = 0; i < len; i++) printf("-");
    printf("\n");
    struct person hug;
    set_buff(buff, hug.name, hug.name, 20 + (void *)hug.name, 'n');
    set_buff(buff, hug.name, &hug.age, 4 + (void *)&hug.age, 'a');
    set_buff(buff, hug.name, &hug.gender, 1 + (void *)&hug.gender, 'g');
    set_buff(buff, hug.name, &hug.height, 4 + (void *)&hug.height, 'h');
    for (int i = 0; i < n; i++) {
        printf("%3c", buff[i]);
    }
    printf("\n");
    return ;
}

int main() {
    struct person hug = {"Captain Hu", 18, 'M', 2.13};
    person su = {"Su", 49, 'M', 2.12};
    printf("(%s, %d, %c, %f)\n",
        hug.name,
        hug.age, 
        hug.gender,
        hug.height
    );
    output(&su);
    output(&hug);
    printf("sizeof(struct person) = %lu\n", sizeof(struct person));
    output_person();
    return 0;
}
