#include <stdio.h>
#include <stdlib.h>

int sum_to_n(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    return s;
}

int main(int argc, char **argv) {
    int n = 10;
    if (argc > 1) n = atoi(argv[1]);
    printf("%d\n", sum_to_n(n));
    return 0;
}
// commit 2
// commit 3
// commit 4
// commit 5
// commit 6
// commit 7
