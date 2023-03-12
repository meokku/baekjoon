#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    double Sqrt=sqrt(n);
    if(Sqrt==(int)Sqrt) return (Sqrt+1)*(Sqrt+1);
    return -1;
}