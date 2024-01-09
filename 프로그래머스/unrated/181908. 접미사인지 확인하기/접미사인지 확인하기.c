#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_suffix) {
    int my_len=strlen(my_string);
    int suf_len=strlen(is_suffix);
    char* new=(char*)malloc(suf_len*sizeof(char*));
    if(suf_len>my_len) return 0;
    for(int i=suf_len;i>0;i--){
        new[suf_len-i]=my_string[my_len-i];
    }
    new[suf_len]='\0';
    printf("%s",new);
    if(strcmp(new,is_suffix)!=0) return 0;
    return 1;
}