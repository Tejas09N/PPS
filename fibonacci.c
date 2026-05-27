// Name - Tejas Bhoyar
// PRN - 2503033111372025

#include <stdio.h>

int main() {
    int n, a = 1, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
