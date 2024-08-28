#include <stdio.h>
#include "gcd.h"

int main(void) {

    int a, b;
    scanf("%d %d", &a, &b);

    int result = gcd(a, b);

    printf("reulst: %d\n", result);

    return 0;
}