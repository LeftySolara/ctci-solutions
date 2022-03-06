/**
 * @file 1_1.c
 * @author Julianne Adams (julianne@julianneadams.info)
 * @brief Solution to CTCI question 1.2
 * @version 0.1
 * @date 2022-03-06
 */

/**
 * Implement a function which reverses a null-terminated string.
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *str = argv[1];
    char *front = str;
    char *back = str + (strlen(str) - 1);
    char tmp;

    while (front < back) {
        tmp = *front;
        *front++ = *back;
        *back-- = tmp;
    }

    printf("%s\n", str);

    return 0;
}