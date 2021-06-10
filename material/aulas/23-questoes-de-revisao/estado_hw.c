#include <unistd.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    while (1) {
        for (int i = 0; i < 5; i++) {
            printf("%d ", rand() % 10);
        }
        printf("\n");
        if (rand() % 10 == 0) printf("%d\n", 1/0);
        sleep(1);
    }
    return 0;
}