#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a[] = { 12, 13, 14};

    for(int i = 0; i < 3; i++)
        printf("%d\n", a[i]);

    return 0;
}