#include "min.h"
#include <cstdio>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("Min(%d, %d) = %d\n", a, b, NMath::Min(a, b));
    return 0;
}
