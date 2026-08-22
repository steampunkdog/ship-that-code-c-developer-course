#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CUBE(x) ((x)*(x)*(x))

int main(void) {
    int n = 0;
    scanf("%d", &n);
    printf("%d cubed is %d\n", n, CUBE(n));
    return 0;
}
