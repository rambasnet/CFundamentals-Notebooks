// countdown program using for loop

#include <stdio.h>
#include <unistd.h>

int main() {
    system("clear"); // bad for security!
    for(int i=10; i>0; i--) {
        printf("%d\n", i);
        sleep(1); //takes second;
        system("clear");
    }
    printf("Blast off!\n");
    return 0;
}