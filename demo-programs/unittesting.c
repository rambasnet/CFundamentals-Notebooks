#include <stdio.h>
#include <assert.h>

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
    assert(factorial(5) == 121);
    printf("%s\n", "all test cases passed!");
}

int main() {
    test();
    printf("1! = %llu\n", factorial(1));
    printf("5! = %llu\n", factorial(5));
    return 0;
}