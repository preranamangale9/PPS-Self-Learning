#include <stdio.h>
 
int main() {
    int marks = 55;
 
    printf("Checking student result...\n");
 
    if (marks >= 40) {
        printf("Student has passed!\n");
    } else {
        printf("Student has failed.\n");
    }
 
    return 0;
}