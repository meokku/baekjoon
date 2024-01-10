#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// strArr_len은 배열 strArr의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* strArr[], size_t strArr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** answer = (char**)malloc(strArr_len*sizeof(char*));
    int num,cnt=0;
    for(int i=0;i<strArr_len;i++){
        num=0;
        for(int j=0;j<strlen(strArr[i]);j++){
            if(strArr[i][j]=='a'){
                if(strArr[i][j+1]=='d'){
                    num=1;
                }
            }   
        }
        if(!num) {
            answer[cnt]=strArr[i];
            cnt++;
        }
    }
    return answer;
}