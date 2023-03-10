#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int sum=n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0) sum+=i;
    }
    return sum;
}