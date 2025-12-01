#include <stdio.h>

int main() {
    FILE *file;
    int n, height;
    int i;
    float meters;
    
    // Open file for writing
    file = fopen("heights.txt", "w");
    
    // Read the count of heights
    scanf("%d", &n);
    
    // Check if exceeding limit
    if (n > 100) {
        printf("Exceeding limit!\n");
        fclose(file);
        return 0;
    }
    
    // Read heights and write to file
    for (i = 0; i < n; i++) {
        scanf("%d", &height);
        fprintf(file, "%d ", height);
    }
    
    // Close file after writing
    fclose(file);
    
    // Open file for reading
    file = fopen("heights.txt", "r");
    
    // Read and display heights in meters
    for (i = 0; i < n; i++) {
        fscanf(file, "%d", &height);
        meters = height * 0.01;
        printf("%.2fm\n", meters);
    }
    
    // Close file
    fclose(file);
    
    return 0;
}
