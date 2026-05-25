// Name- Tejas S. Bhoyar
// PRN no-2503033111372025
#include <stdio.h>
int main() {
    int a,b;
      printf("Enter Number A: ");
      scanf("%d",&a);
      printf("Enter Number B: ");
      scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;


    printf("a = %d, b = %d\n", a, b);
    return 0;
}
