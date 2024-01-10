#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    if(strlen(myString)<strlen(pat)) return 0;
    char* str=(char*)malloc(strlen(pat)*sizeof(char));
    char* ptr=myString;
    for(int i=0;i<strlen(pat);i++){
        if(pat[i]=='A') str[i]='B';
        else str[i]='A';
    }
    str[strlen(pat)]='\0';
    
    for(int i=0;i<strlen(myString)-strlen(str)+1;i++){
        if(strncmp(ptr,str,strlen(str))==0) return 1;
        ptr++;
    }
    return 0;
}