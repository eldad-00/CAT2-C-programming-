//C program 
/*
Name; Eldad Mwaura 
Reg no;CT101/G/26651/25
Description; 2D Array 
*/

// main function

  #include <stdio.h>

int main() {
    // Declare and initialize a 2D array named 'scores' with 2 rows and 2 columns
    int scores[2][2] = {{65, 92}, {35, 70}, {84, 72}, {59, 67}};
    
    // Loop to print the elements using a nested for loop
    printf("Elements of the 2D array 'scores':\n");
    
    // Outer loop for rows
    for (int i = 0; i < 2; i++) {
        // Inner loop for columns
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n"); // New line after each row
    }

    return 0;
}
 