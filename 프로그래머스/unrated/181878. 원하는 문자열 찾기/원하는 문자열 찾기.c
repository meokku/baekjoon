#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    char* cpy_my=(char*)malloc(strlen(myString)*sizeof(char*));
    char* cpy_pat=(char*)malloc(strlen(pat)*sizeof(char*));
    
    strcpy(cpy_my,myString);
    strcpy(cpy_pat,pat);
    
    for(int i=0;i<strlen(cpy_my);i++){
        if(cpy_my[i]>=65 && cpy_my[i]<=90) cpy_my[i]+=32;
    }
    for(int i=0;i<strlen(cpy_pat);i++){
        if(cpy_pat[i]>=65 && cpy_pat[i]<=90) cpy_pat[i]+=32;
    }
    
    char* ptr=strstr(cpy_my,cpy_pat);
    if(ptr!=NULL) return 1;
    else return 0;
}