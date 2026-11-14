#include <stdio.h>
 
int main() {
    int count = 5;
 
    printf("Starting countdown:\n");
 
    while (count > 0) {
        printf("Count: %d\n", count);
        count--;
    }
 
    printf("Done!\n");
 
    return 0;
}
