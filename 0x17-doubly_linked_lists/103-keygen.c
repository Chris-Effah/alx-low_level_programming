#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(int argc __attribute__((unused)), char *argv[]) {
    char key[7];
    char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
    size_t i, len = strlen(argv[1]);
    int add = 0;
    int product = 1;
    int sum_squares = 0;
    char max_char;

    key[0] = l[(len ^ 59) & 63];

    for (i = 0; i < len; i++)
        add += argv[1][i];
    key[1] = l[(add ^ 79) & 63];

    for (i = 0; i < len; i++)
        product *= argv[1][i];
    key[2] = l[(product ^ 85) & 63];

    max_char = argv[1][0];
    for (i = 0; i < len; i++) {
        if (argv[1][i] >= max_char)
            max_char = argv[1][i];
    }
    srand(max_char ^ 14);
    key[3] = l[rand() & 63];

    for (i = 0; i < len; i++)
        sum_squares += argv[1][i] * argv[1][i];
    key[4] = l[(sum_squares ^ 239) & 63];

    srand(max_char ^ 229);
    while (max_char--) {
        rand();
    }
    key[5] = l[(rand() ^ 229) & 63];

    key[6] = '\0';

    printf("%s\n", key);
    return 0;
}

