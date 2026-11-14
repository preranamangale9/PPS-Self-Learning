#include <stdio.h>
 
int main() {
    // We want to enter details for three students
    int n = 3;
 
    // Variables to store student information
    int rollNo;
    char name[50];
    float marks;
 
    // Open the file in write mode
    FILE *file = fopen("class_records.txt", "w");
 
    // Check if file opened correctly
    if (file == NULL) {
        printf("File cannot be opened!\n");
        return 1;
    }
 
    // Repeat the input process three times
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
 
        // Take roll number
        printf("Enter Roll Number: ");
        scanf("%d", &rollNo);
 
        // Take student's name
        printf("Enter Name: ");
        scanf("%s", name);
 
        // Take marks
        printf("Enter Marks: ");
        scanf("%f", &marks);
 
        // Write student details into the file
        fprintf(file, "Roll: %d | Name: %s | Marks: %.2f\n",
                rollNo, name, marks);
    }
 
    // Close the file after writing
    fclose(file);
 
    // Open the same file in read mode
    file = fopen("class_records.txt", "r");
 
    // Check if file opened for reading
    if (file == NULL) {
        printf("File cannot be read!\n");
        return 1;
    }
 
    // Create a variable to hold one line from the file
    char line[150];
 
    printf("\nAll Student Records:\n");
 
    // Read the file line by line
    while (fgets(line, sizeof(line), file) != NULL) {
        // Display the line
        printf("%s", line);
    }
 
    // Close the file after reading
    fclose(file);
 
    // End the program
    return 0;
}
