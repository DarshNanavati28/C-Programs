/*
 * Program: Bitwise Shift and Mask
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that demonstrates bitwise NOT, left-shift operations,
 * and hexadecimal bit masks. It compares expressions using an int
 * shift with expressions using a long int shift.
 */

#include <stdio.h>

int main(void)
{
    unsigned long value = 0xFFFFFFFFUL;

    printf("Hello!!\n\n");

    printf("Bitwise Shift and Mask Demonstration:\n\n");

    printf("Bit 14:\n");
    printf("Using int shift : %08lX\n",
           value & ~(1 << 14));
    printf("Using long shift: %08lX\n",
           value & ~(1L << 14));

    printf("\nBit 15:\n");
    printf("Using int shift : %08lX\n",
           value & ~(1 << 15));
    printf("Using long shift: %08lX\n",
           value & ~(1L << 15));

    printf("\nBit 16:\n");
    printf("Using int shift : %08lX\n",
           value & ~(1 << 16));
    printf("Using long shift: %08lX\n",
           value & ~(1L << 16));

    printf("\nThank You!!\n");

    return 0;
}
