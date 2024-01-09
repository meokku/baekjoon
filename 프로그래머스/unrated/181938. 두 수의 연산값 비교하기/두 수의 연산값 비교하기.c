#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int a, int b) {
    char str[10];
    sprintf(str,"%d",b);
    int num1=a*pow(10,strlen(str))+b;
    int num2=2*a*b;
    
    return num1>=num2?num1:num2;
}