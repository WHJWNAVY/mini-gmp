#include <stdio.h>
#include "mini-gmp.h"

int main(int argc, char **argv)
{
    int ret = 0;
    mpz_t a, b, c;

    if (argc != 3)
    {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    mpz_init(a);
    mpz_init(b);
    mpz_init(c);

    if (mpz_set_str(a, argv[1], 10) != 0)
    {
        printf("Invalid num 1 [%s]\n", argv[1]);
        return -1;
    }
    if (mpz_set_str(b, argv[2], 10))
    {
        printf("Invalid num 2 [%s]\n", argv[2]);
        return -2;
    }

    mpz_mul(c, a, b);

    // printf("\n");
    mpz_out_str(stdout, 10, a);
    printf(" x ");
    mpz_out_str(stdout, 10, b);
    printf(" = ");
    mpz_out_str(stdout, 10, c);
    printf("\n");

    return 0;
}

