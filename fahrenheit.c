#include <stdio.h>

int main(void)
{
    float c, f = 0.0;
    printf("C: ");
    scanf("%f", &c);
    if (c )
    f = ((c * 9) / 5) + 32;
    printf("F: %.1f\n", f);
    return 0;
}
