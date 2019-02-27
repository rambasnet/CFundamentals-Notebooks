#include <stdio.h>
#include <stdlib.h>

void showMenu() {
    printf("%s\n", "Please Select:");
    printf("%s\n", "1. Add Two Numbers");
    printf("%s\n", "2. Subtract Two Numbers");
    printf("%s\n", "0. Quit");
}

void getNumbers(int *n1, int *n2) {
    printf("Enter two numbers spearated by space: ");
    scanf("%d%d", n1, n2);
}

int add(int a, int b) {
    return a+b;
}

int sub(int a, int b) {
    return a-b;
}

int main() {
    int option;
    int num1, num2;
    char ch;
    char line[100];
    while (1) {
        system("clear");
        showMenu();
        scanf("%d", &option);
        if (option == 0)
            break;
        getNumbers(&num1, &num2);
        switch (option) {
            case 1:
                printf("%d + %d = %d\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("%d - %d = %d\n", num1, num2, sub(num1, num2));
                break;
        }
        // read and discard white spaces and \n left behind by scanf!
        fgets(line, 100, stdin);
        printf("Enter to continue...\n");
        scanf("%c", &ch);
    }
    return 0;
}