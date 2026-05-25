// Name- Tejas S. Bhoyar
// PRN no-2503033111372025
#include <stdio.h>
int main() {
    int pin=0003,E;
    printf("Enter Pin: ");
    scanf("%d",&E);

    if (E==pin){
        printf("correct Pin\n you may withdraw cash");
    }
    else {
        printf("incorrect pin");
    }
    return 0;
}
