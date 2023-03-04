#include <stdio.h>

int main(){
    int T,a,b;
    int* pa=&a;
    int* pb=&b;
    
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        scanf("%d %d",pa,pb);
        printf("Case #%d: %d + %d = %d\n",i,*pa,*pb,*pa+*pb);
    }
    return 0;
}