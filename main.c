#include <stdio.h>

int main() {
    FILE *input_file, *even_file, *odd_file;
    int count, number;
    int i;
    
    // Open input file
    input_file = fopen("input.txt", "r");
    
    // Read the count of numbers
    fscanf(input_file, "%d", &count);
    
    // Open output files
    even_file = fopen("even.txt", "w");
    odd_file = fopen("odd.txt", "w");
    
    // Read each number and classify it
    for (i = 0; i < count; i++) {
        fscanf(input_file, "%d", &number);
        
        if (number % 2 == 0) {
            // Even number
            fprintf(even_file, "%d ", number);
        } else {
            // Odd number
            fprintf(odd_file, "%d ", number);
        }
    }
    
    // Close all files
    fclose(input_file);
    fclose(even_file);
    fclose(odd_file);
    
    return 0;
}
