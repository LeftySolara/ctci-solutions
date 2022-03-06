/**
 * @file 1_1.c
 * @author Julianne Adams (julianne@julianneadams.info)
 * @brief Solution to CTCI question 1.1
 * @version 0.1
 * @date 2022-03-06
 */

/**
 * Implement an algorithm to determine if a string has all unique characters.
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Checks if a string contains all unique characters.
 *
 * @param str The string to check
 * @return int 1 if the string contains all unique characters, or 0 otherwise
 */
int is_unique(const char *str)
{
    if (strlen(str) > 256) {
        return 0;
    }

    char chars[256] = {0};
    const char *ch = str;

    while (*ch != '\0') {
        if (chars[*ch] == 1) {
            return 0;
        }
        chars[*ch] = 1;
        ++ch;
    }
    return 1;
}

int main(int argc, char **argv)
{
    const char *str = argv[1];
    int unique = is_unique(str);

    if (unique) {
        printf("All characters are unique.\n");
    }
    else {
        printf("There are duplicate characters.\n");
    }
    return 0;
}