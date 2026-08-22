#include <stdio.h>

int main(void) {
    int num = 0;
    scanf("%d", &num);

    long long sum = 0;
    while(num != 0) {
        sum += num--;
    }
    printf("%lld\n", sum);
    return 0;
}
