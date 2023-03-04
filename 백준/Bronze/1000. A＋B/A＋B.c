#include <stdio.h>
#include <string.h>

int main(){
    int a, b;
    int* pa=&a;
    int* pb=&b;

    scanf("%d %d",pa,pb);
    printf("%d\n",*pa+*pb);
    return 0;
}