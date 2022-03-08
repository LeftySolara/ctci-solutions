/**
 * @file 1_3.c
 * @author Julianne Adams (julianne@julianneadams.info)
 * @brief Solution to CTCI question 1.3
 * @version 0.1
 * @date 2022-03-07
 */

/**
 * Given two strings, write a method to determine if one is a permutation of the other.
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Determines whether two strings are permutations of each other.
 *
 * @param str1 The first string to compare
 * @param str2 The second string to compare
 * @return int A nonzero integer if the strings are permutations, or 0 otherwise
 *
 * Here we keep a count of the number of occurrences of each character in each string.
 * If the counts are equal, then the strings must be permutations of each other.
 */
int is_permutation(const char *str1, const char *str2)
{
    /* Assume we're only using ASCII characters. */
    char str1_chars[255] = {0};
    char str2_chars[255] = {0};

    const char *ch = str1;
    while (*ch != '\0') {
        ++str1_chars[(int)*ch];
        ++ch;
    }

    ch = str2;
    while (*ch != '\0') {
        ++str2_chars[(int)*ch];
        ++ch;
    }

    return !memcmp(str1_chars, str2_chars, 255 * sizeof(char));
}

int main(int argc, char **argv)
{
    const char *str1 = argv[1];
    const char *str2 = argv[2];

    const int permutation = is_permutation(str1, str2);
    if (permutation) {
        printf("The two strings are permutations.\n");
    }
    else {
        printf("The strings are not permutations.\n");
    }

    return 0;
}