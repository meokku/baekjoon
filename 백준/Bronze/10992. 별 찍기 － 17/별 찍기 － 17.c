#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++)
        printf(" ");
    printf("*\n");
    for (int i = 1; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");
        printf("*");
        for (int k = 0; k < i * 2 - 1; k++)
            printf(" ");
        printf("*\n");
    }
    if(n!=1){
        for(int i=0;i<2*n-1;i++)
            printf("*");   
    }
    return 0;
}