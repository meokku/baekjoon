#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* target) {
    if(strlen(my_string)<strlen(target)) return 0;
    for(int i=0;i<strlen(my_string)-strlen(target)+1;i++){
        if(strncmp(my_string+i,target,strlen(target))==0) return 1;
          
    }
    return 0;
}