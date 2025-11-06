//C program 
/*
Name; Eldad Mwaura 
Reg no;CT101/G/26651/25
Description; integer program 
*/

// main function

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// Function to prompt the user to input 10 integers and store them in input.txt
void writeInputToFile() {
    FILE *file = fopen("input.txt", "w");
    if (file == NULL) {
        printf("Error opening input.txt for writing.\n");
        exit(1);  // Exit the program if the file cannot be opened
    }

    printf("Enter 10 integers:\n");
    for (int i = 0; i < SIZE; i++) {
        int num;
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &num);
        fprintf(file, "%d\n", num);
    }

    fclose(file);  // Close the file after writing
}

// Function to read integers from input.txt, calculate the sum and average, and write to output.txt
void processDataAndWriteOutput() {
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input.txt for reading.\n");
        exit(1);  // Exit if the file cannot be opened
    }

    int numbers[SIZE], sum = 0;
    for (int i = 0; i < SIZE; i++) {
        fscanf(inputFile, "%d", &numbers[i]);
        sum += numbers[i];
    }

    fclose(inputFile);  // Close input.txt after reading

    float average = sum / (float)SIZE;

    FILE *outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output.txt for writing.\n");
        exit(1);  // Exit if the file cannot be opened
    }

    fprintf(outputFile, "Sum: %d\n", sum);
    fprintf(outputFile, "Average: %.2f\n", average);

    fclose(outputFile);  // Close output.txt after writing
}

// Function to display the contents of input.txt and output.txt
void displayFiles() {
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input.txt for reading.\n");
        exit(1);
    }

    printf("\nContents of input.txt:\n");
    int num;
    while (fscanf(inputFile, "%d", &num) != EOF) {
        printf("%d ", num);
    }
    fclose(inputFile);

    printf("\n\n");

    FILE *outputFile = fopen("output.txt", "r");
    if (outputFile == NULL) {
        printf("Error opening output.txt for reading.\n");
        exit(1);
    }

    printf("Contents of output.txt:\n");
    char line[100];
    while (fgets(line, sizeof(line), outputFile) != NULL) {
        printf("%s", line);
    }
    fclose(outputFile);
}

int main() {
    writeInputToFile();            // Step 1: Write user input to input.txt
    processDataAndWriteOutput();   // Step 2: Process data and write sum & average to output.txt
    displayFiles();                // Step 3: Display contents of both files
    return 0;
}
 