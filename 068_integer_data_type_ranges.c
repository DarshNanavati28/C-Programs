/*
 * Program: Integer Data Type Ranges
 * Author: Darsh Nanavati
 *
 * Description:
 * A C program that displays the minimum and maximum values
 * supported by different signed and unsigned integer data types.
 * It also displays the number of bits used by each data type.
 */

#include <stdio.h>
#include <limits.h>

#define SHOW_RANGE(type, name, min, max)                 \
    printf("%-20s (%2zu bits): %lld to %llu\n",          \
           name, sizeof(type) * CHAR_BIT,                \
           (long long)(min), (unsigned long long)(max))

int main(void)
{
    printf("Hello!!\n\n");

    printf("Range of UNSIGNED Integer Data Types:\n\n");

    SHOW_RANGE(unsigned char, "unsigned char",
               0, UCHAR_MAX);

    SHOW_RANGE(unsigned short, "unsigned short int",
               0, USHRT_MAX);

    SHOW_RANGE(unsigned int, "unsigned int",
               0, UINT_MAX);

    SHOW_RANGE(unsigned long, "unsigned long int",
               0, ULONG_MAX);

    printf("\nRange of SIGNED Integer Data Types:\n\n");

    printf("%-20s (%2zu bits): %d to %d\n",
           "signed char",
           sizeof(signed char) * CHAR_BIT,
           SCHAR_MIN, SCHAR_MAX);

    printf("%-20s (%2zu bits): %d to %d\n",
           "signed short int",
           sizeof(short int) * CHAR_BIT,
           SHRT_MIN, SHRT_MAX);

    printf("%-20s (%2zu bits): %lld to %lld\n",
           "signed int",
           sizeof(int) * CHAR_BIT,
           (long long)INT_MIN,
           (long long)INT_MAX);

    printf("%-20s (%2zu bits): %lld to %lld\n",
           "signed long int",
           sizeof(long int) * CHAR_BIT,
           (long long)LONG_MIN,
           (long long)LONG_MAX);

    printf("\nThank You!!\n");

    return 0;
}
