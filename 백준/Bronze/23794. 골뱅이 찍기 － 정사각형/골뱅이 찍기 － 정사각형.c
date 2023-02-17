#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n+2;i++)
        printf("@");
    printf("\n");
    for(int i=1;i<n+1;i++){
        printf("@");
        for(int j=0;j<n;j++)
            printf(" ");
        printf("@\n");
    }
    for(int i=0;i<n+2;i++)
        printf("@");
    printf("\n");
}