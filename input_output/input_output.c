

#include <stdio.h>

int main()
{
    int num ;
    float num2;
    double num3;
    char name;

    printf("Enter Integer Number: ");
    scanf("%d", &num);

    printf("Enter Float Number: ");
    scanf("%f", &num2);

    printf("Enter Double Number: ");
    scanf("%lf", &num3);

    printf("Enter Char Number: ");
    scanf(" %c", &name);

    printf("Interger Number: %d\n", num);
    printf("Float Number: %f\n", num2);
    printf("Double Number: %lf\n", num3);
    printf("Character: %c\n", name);

    return 0;
}
