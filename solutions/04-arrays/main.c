#include <stdio.h>

int main(void) {
    int arr[5] = {0};
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    
    printf("%d\n", max);
    return 0;
}
