#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int size = 0;
    scanf("%d", &size);
    
    int *nums = malloc(size * sizeof(int));
    if (nums == NULL) {
        return 1;
    }    

    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }


    long long sum = 0;
    for (int i = 0; i < size; i++) {
        sum += nums[i];
    }

    printf("%lld\n", sum);
    free(nums);
    nums = NULL;
    return 0;
}
