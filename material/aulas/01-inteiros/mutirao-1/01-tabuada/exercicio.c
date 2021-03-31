#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);

    int i = 2;
    while(i<=n){
        int c = 1;
        int m;
        while(c<=n){
            m = i*c;
            printf("%d ", m);
            c++;
        }
        printf("\n");
        i++;
    }



    return 0;
}
