#include <stdio.h>

int main(){
    int a,b;
    int* pa=&a;
    int* pb=&b;
    
    scanf("%d",pa);
    scanf("%d",pb);
    printf("%d",*pa+*pb);
    return 0;
}