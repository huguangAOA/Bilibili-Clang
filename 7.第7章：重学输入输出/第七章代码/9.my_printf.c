/*************************************************************************
	> File Name: 9.my_printf.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>
#include <stdarg.h>
#include <inttypes.h>

#define TEST(format, args...) { \
    int n1, n2; \
    n1 = printf(format, ##args); \
    n2 = my_printf(format, ##args); \
    printf("n1 = %d, n2 = %d\n", n1, n2); \
}

char base_16_code(int x) {
    if (x < 10) return x + '0';
    return x - 10 + 'a';
}

int my_printf(const char *format, ...) {
    #define PUTC(c) putchar(c), cnt += 1
    va_list args;
    va_start(args, format);
    int cnt = 0;
    for (int i = 0; format[i]; i++) {
        switch (format[i]) {
            case '%': {
                switch (format[i + 1]) {
                    case '%': {
                        PUTC('%');
                        i += 1;
                    } break;
                    case 's': {
                        const char *s = va_arg(args, const char *);
                        for (int j = 0; s[j]; j++) PUTC(s[j]);
                        i += 1;
                    } break;
                    case 'd': {
                        int num = va_arg(args, int);
                        int8_t arr[20], len = 0, flag = (num < 0);
                        do {
                            arr[len++] = num % 10;
                            num /= 10;
                        } while(num);
                        if (flag) PUTC('-');
                        for (int j = len - 1; j >= 0; j--) {
                            if (flag) PUTC(-arr[j] + '0');
                            else PUTC(arr[j] + '0');
                        }
                        i += 1;
                    } break;
                    case 'x': {
                        unsigned int num = va_arg(args, unsigned int);
                        int8_t arr[20], len = 0;
                        do {
                            arr[len++] = num % 16;
                            num /= 16;
                        } while (num);
                        for (int j = len - 1; j >= 0; j--) {
                            PUTC(base_16_code(arr[j]));
                        }
                        i += 1;
                    } break;
                }
            } break;
            default : PUTC(format[i]); break;
        }
    }
    #undef PUTC
    return cnt;
}

int main() {
    int n1, n2;
    TEST("hello world\n");
    TEST("100%%\n");
    TEST("%s\n", "hello world 100%%");
    TEST("INT32_MAX = %d, INT32_MIN = %d\n", INT32_MAX, INT32_MIN);
    TEST("zero = %d\n", 0);
    TEST("123 = %x, -1 = %x, INT32_MIN = %x\n", 123, -1, INT32_MIN);
    return 0;
}
