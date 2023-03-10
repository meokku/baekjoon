#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    char* answer = (char*)malloc(5-num%2);
    if(num%2) strcpy(answer,"Odd");
    else strcpy(answer,"Even");
    return answer;
}