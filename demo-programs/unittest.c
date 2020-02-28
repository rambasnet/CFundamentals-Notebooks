#include <stdio.h>
#include <assert.h>
#include <string.h>

typedef unsigned long long int llu; // create type alias

// define a function that finds a factorial of a given n
llu factorial(int n) {
    llu f = 1;
    for(int i=2; i<=n; i++)
        f *= i;
    return f;
}

void test() {
    assert(factorial(1) == 1);
    assert(factorial(5) == 120);
    // 2 quintillion or 2 billion billion +
    assert(factorial(20) == 2432902008176640000);
    printf("%s\n", "all test cases passed!");
}

int main(int arg_count, char* argv_list[]) {
    printf("argument count = %d\n", arg_count);
    if (arg_count == 2 && strncmp(argv_list[1], "test", 4) == 0) {
        test();
    }
    else {
        printf("1! = %llu\n", factorial(1));
        printf("5! = %llu\n", factorial(5));
        printf("20! = %llu\n", factorial(20));
    }
    return 0;
}