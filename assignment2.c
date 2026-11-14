#include <stdio.h>
 
int main() {
    int rollNo;
    char name[50];
 
    FILE *file = fopen("student.txt", "w");
 
    if (file == NULL) {
        printf("File cannot be opened!\n");
        return 1;
    }
 
    
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);
 
    printf("Enter Name: ");
    scanf("%s", name);
 
    fprintf(file, "Roll Number: %d\n", rollNo);
    fprintf(file, "Name: %s\n", name);
 
    fclose(file);
 
    file = fopen("student.txt", "r");
 
    if (file == NULL) {
        printf("File cannot be read!\n");
        return 1;
    }
 
    char line[100];
 
    printf("\nStudent Details:\n");
 
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
 
    fclose(file);
 
    return 0;
}
