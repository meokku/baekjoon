#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number, int n, int m) {
    if(!(number%n)&&!(number%m)) return 1;
    return 0;
}