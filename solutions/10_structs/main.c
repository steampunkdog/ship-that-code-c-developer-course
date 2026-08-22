#include <stdio.h>

struct Point {
    int x;
    int y;
};

int dst_sq(struct Point a, struct Point b) {
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    return dx*dx + dy*dy;
}

int main(void) {
    struct Point a = {};
    struct Point b = {};

    scanf("%d %d", &a.x, &a.y);
    scanf("%d %d", &b.x, &b.y);

    printf("%d\n", dst_sq(a, b));
    return 0;
}
