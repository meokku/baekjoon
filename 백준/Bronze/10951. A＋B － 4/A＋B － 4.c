#include <stdio.h>

int main(){
    int a,b;
    int* pa=&a;
    int* pb=&b;
    while(scanf("%d %d",pa,pb)==2)
        printf("%d\n",*pa+*pb);
    return 0;
}