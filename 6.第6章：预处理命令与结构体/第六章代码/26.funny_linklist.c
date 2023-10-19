/*************************************************************************
	> File Name: 26.funny_linklist.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define start(addr, T, d) ((T *)(((void *)addr) - offset(T, d)))
#define offset(T, d) ((size_t)(&(((T *)(0))->d)))

enum DataType {
    A_type,
    B_type,
    C_type,
    D_type,
    MAX_type
};

typedef struct Link {
    enum DataType type;
    struct Link *next;
} Link;

struct A {
    int x, y;
    Link l;
};

void output_A(Link *p) {
    struct A *a = start(p, struct A, l);
    printf("struct A : x = %d, y = %d\n", a->x, a->y);
    return ;
}

Link *getDataA() {
    struct A *a = (struct A *)malloc(sizeof(struct A));
    a->x = 3, a->y = 4;
    a->l.next = NULL;
    a->l.type = A_type;
    return &(a->l);
}

struct B {
    int a;
    Link l;
    double b;
};

void output_B(Link *p) {
    struct B *a = start(p, struct B, l);
    printf("struct B : a = %d, b = %lf\n", a->a, a->b);
    return ;
}

Link *getDataB() {
    struct B *b = (struct B *)malloc(sizeof(struct B));
    b->a = 100, b->b = 45.3;
    b->l.next = NULL;
    b->l.type = B_type;
    return &(b->l);
}

struct C {
    char c;
    Link l;
    const char *s;
    int t;
};

void output_C(Link *p) {
    struct C *a = start(p, struct C, l);
    printf("struct C : c = %c, s = %s, t = %d\n", a->c, a->s, a->t);
    return ;
}

Link *getDataC() {
    struct C *c = (struct C *)malloc(sizeof(struct C));
    c->c = 'x', c->s = "struct C", c->t = 99;
    c->l.next = NULL;
    c->l.type = C_type;
    return &(c->l);
}

struct D {
    Link l;
    long long a;
};

void output_D(Link *p) {
    struct D *a = start(p, struct D, l);
    printf("struct D : a = %lld\n", a->a);
    return ;
}

Link *getDataD() {
    struct D *d = (struct D *)malloc(sizeof(struct D));
    d->a = INT64_MAX;
    d->l.next = NULL;
    d->l.type = D_type;
    return &(d->l);
}
Link *(*getData[MAX_type])() = {
    getDataA, getDataB, getDataC, getDataD
};

void (*output[MAX_type])(Link *) = {
    output_A, output_B, output_C, output_D
};

int main() {
    #define MAX_OP 10
    Link head, *p = &head;
    for (int i = 0; i < MAX_OP; i++) {
        p->next = getData[rand() % MAX_type]();
        p = p->next;
    }
    for (p = head.next; p; p = p->next) {
        output[p->type](p);
    }
    return 0;
}
