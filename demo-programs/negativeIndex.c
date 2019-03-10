// compile it using compile.sh
// run the program with -ve index (-1, -2, -3, 0, 1, 2, 3, 4, 5)
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int nums2[] = {100, 200, 300};
    int nums[] = {1, 2, 3};
    int nums1[] = {10, 20, 30};
    int index = atoi(argv[1]);
    printf("value at index %d = %d\n", index, nums[index]);
    return 0;
}