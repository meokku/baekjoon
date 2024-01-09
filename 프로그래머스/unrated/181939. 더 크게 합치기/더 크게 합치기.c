#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int solution(int a, int b) {
    char s1[10],s2[10];
    sprintf(s1,"%d",a);
    sprintf(s2,"%d",b);
    int num1=a*pow(10,(strlen(s2)))+b;
    int num2=b*pow(10,(strlen(s1)))+a;
    
    int ans=(num1>=num2)?num1:num2;
    return ans;
}