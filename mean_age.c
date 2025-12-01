#include <stdio.h>

int main() {
    FILE *input_file;
    int n, age;
    int i;
    float sum = 0.0;
    float average;
    
    // Open input file
    input_file = fopen("ages.txt", "r");
    
    // Read the count of ages
    fscanf(input_file, "%d", &n);
    
    // Check if exceeding limit
    if (n > 20) {
        printf("Exceeding limit!\n");
        fclose(input_file);
        return 0;
    }
    
    // Read each age and add to sum
    for (i = 0; i < n; i++) {
        fscanf(input_file, "%d", &age);
        sum = sum + age;
    }
    
    // Calculate average
    average = sum / n;
    
    // Print result with one decimal place
    printf("%.1f\n", average);
    
    // Close file
    fclose(input_file);
    
    return 0;
}
