#include <stdio.h>

int main(void) {
    int num = 0;
    scanf("%d", &num);

    if (num % 15 == 0) {
        printf("FizzBuzz\n");
    } else if (num % 5 == 0) {
        printf("Buzz\n");
    } else if (num % 3 == 0) {
        printf("Fizz\n");
    } else {
        printf("%d\n", num);
    }
    
    return 0;
}
