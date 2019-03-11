#include <stdio.h>

int main() {
    int (*fnc)(int a, int b);
    printf("%d\n", sizeof(fnc));
    return 0;
}