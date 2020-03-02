// countdown program using for loop

#include <stdio.h>
#include <unistd.h>

int main() {
    system("/bin/bash"); // bad for security! why?
    for(int i=10; i>0; i--) {
        printf("%d\n", i);
        sleep(1); //takes second;
        system("date");
    }
    printf("Blast off!\n");
    return 0;
}

// show why system("clear") is bad!
/*
    1. create a clear bash script and add it to the $PATH
    2. see hard-coded strings using strings program
    3. modify it with hex-editor
*/