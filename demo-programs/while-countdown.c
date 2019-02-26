// countdown program using for loop

#include <stdio.h>
#include <unistd.h>

int main() {
    system("clear"); // bad for security!
    int count = 10;
    while (count > 0) {
        printf("%d\n", count);
        sleep(1); //sleep 1 second;
        system("clear");
        count--;
    }
    printf("Blast off!\n");
    return 0;
}