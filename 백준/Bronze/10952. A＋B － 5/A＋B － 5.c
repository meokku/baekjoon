#include <stdio.h>

int main(){
    int a,b;
    int* pa=&a;
    int* pb=&b;
    while(1){
        scanf("%d %d",pa,pb);
        if (*pa==0 && *pb==0)
            break;
        printf("%d\n",*pa+*pb);
    }
    return 0;
}