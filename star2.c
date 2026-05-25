#include <stdio.h>

int main() {
    // Loop for 5 rows
    for(int i = 0; i < 5; i++) {
        // Print 5 stars in each row
        for(int j = 0; j < 5; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }
    return 0;
}
