#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr1_len은 배열 arr1의 길이입니다.
// arr2_len은 배열 arr2의 길이입니다.
int solution(int arr1[], size_t arr1_len, int arr2[], size_t arr2_len) {
    if(arr1_len!=arr2_len){
        return ((arr1_len==arr2_len)?0:((arr1_len>arr2_len)?1:-1));
    }
    int num1=0,num2=0;
    for(int i=0;i<arr1_len;i++){
        num1+=arr1[i];
    }
    for(int i=0;i<arr2_len;i++){
        num2+=arr2[i];
    }
    return ((num1==num2)? 0:((num1>num2)? 1: -1));
}