#include <stdio.h>
 
int main() {
    int n = 3;
    int rollNo;
    char name[50];
    float marks;
 

    FILE *file = fopen("class_records.txt", "w");
 
    if (file == NULL) {
        printf("File cannot be opened!\n");
        return 1;
    }
 

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
 
        printf("Enter Roll Number: ");
        scanf("%d", &rollNo);
 
        printf("Enter Name: ");
        scanf("%s", name);
 
        printf("Enter Marks: ");
        scanf("%f", &marks);
 

        fprintf(file, "Roll: %d | Name: %s | Marks: %.2f\n",
                rollNo, name, marks);
    }
 

    fclose(file);
 

    file = fopen("class_records.txt", "r");
 
    if (file == NULL) {
        printf("File cannot be read!\n");
        return 1;
    }
 

    char line[150];
 
    printf("\nAll Student Records:\n");
 
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
 

    fclose(file);
 
    return 0;
}
