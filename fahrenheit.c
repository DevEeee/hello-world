#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float celsius = 0.0, f = 0.0;
    printf("C: ");
    scanf("%f", &celsius);
    f = (((celsius * 9) / 5) + 32);
    printf("F: %.1f\n", f);
    return 0;
}
