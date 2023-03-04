#include <stdio.h>

int main(){
    int T,a,b;
    int* pa=&a;
    int* pb=&b;
    
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d,%d",pa,pb);
        printf("%d\n",*pa+*pb);
    }
    return 0;
}