#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int k) {
    char* str=(char*)malloc(strlen(my_string)*k+1);
    memset(str,0,strlen(my_string)*k+1);
    for(int i=0;i<k;i++)
        strcat(str,my_string);
    return str;
}