#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *input_file, *even_file, *odd_file;
    int count, number;
    int i;
    
    // Open input file
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }
    
    // Read the count of numbers
    fscanf(input_file, "%d", &count);
    printf("Reading %d numbers from input.txt...\n", count);
    
    // Open output files
    even_file = fopen("even.txt", "w");
    odd_file = fopen("odd.txt", "w");
    
    if (even_file == NULL || odd_file == NULL) {
        printf("Error: Cannot create output files\n");
        fclose(input_file);
        return 1;
    }
    
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
    
    printf("Done! Created even.txt and odd.txt\n");
    
    return 0;
}
