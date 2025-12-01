#include <stdio.h>

int main() {
    FILE *input_file;
    int n, number;
    int i;
    int even_count = 0;
    int odd_count = 0;
    
    // Open input file
    input_file = fopen("numbers.txt", "r");
    
    // Read the count of numbers
    fscanf(input_file, "%d", &n);
    
    // Check if exceeding limit
    if (n > 100) {
        printf("Exceeding limit!\n");
        fclose(input_file);
        return 0;
    }
    
    // Read each number and count even/odd
    for (i = 0; i < n; i++) {
        fscanf(input_file, "%d", &number);
        
        if (number % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    // Print results
    printf("Even: %d\n", even_count);
    printf("Odd: %d\n", odd_count);
    
    // Close file
    fclose(input_file);
    
    return 0;
}
