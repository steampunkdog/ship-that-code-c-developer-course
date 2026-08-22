#include <stdio.h>

int main(void) {
    char str[100];
    fgets(str, sizeof str, stdin);

    int len = 0;
    while(str[len] != '\n' && str[len] != '\0') {
        len++;
    }
    printf("%d\n", len);
    return 0;
}
