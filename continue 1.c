#include <stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int square = a * a;
    printf("The square of %d is %d\n", a, square);
    

    printf("\n");


    int r;
    printf("Enter another number: ");
    scanf("%d", &r);
    int circle = 3.14 * r * r;
    printf("The area of the circle with radius is %d\n", circle);
    return 0;
}