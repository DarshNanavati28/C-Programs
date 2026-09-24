/*
 * Program: Float Binary Representation
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that displays the IEEE 754-style 32-bit binary
 * representation of several floating-point values.
 *
 * The 32 bits are divided into:
 * 1 bit  - Sign
 * 8 bits - Exponent
 * 23 bits - Fraction (Mantissa)
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(void)
{
    static float values[] =
    {
        -2.0f, -1.0f, -0.75f, -0.5f,
         0.0f,  0.5f,  0.75f,  1.0f, 2.0f
    };

    int i, j;
    uint32_t bits;

    printf("Hello!!\n\n");
    printf("IEEE 754 Floating-Point Representation:\n\n");

    for (i = 8; i >= 0; i--)
    {
        memcpy(&bits, &values[i], sizeof(bits));

        printf("%5.2f\t", values[i]);

        for (j = 31; j >= 0; j--)
        {
            if (j == 31 || j == 23)
                printf(" ");

            printf("%u", (bits >> j) & 1U);

            if (j == 31 || j == 23)
                printf(" ");
        }

        printf("\n");
    }

    printf("\nFormat: Sign | Exponent | Fraction\n");
    printf("        1 bit |  8 bits  | 23 bits\n");

    printf("\nThank You!!\n");

    return 0;
}
