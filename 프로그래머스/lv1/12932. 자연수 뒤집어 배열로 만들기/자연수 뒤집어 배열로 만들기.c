#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    int temp=0;
    int* answer = (int*)malloc(sizeof(int)*12);
    while(n>0) {
        answer[temp]=n%10;
        n/=10;temp++;
    }
    return answer;
}