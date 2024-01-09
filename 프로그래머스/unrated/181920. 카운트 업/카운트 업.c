#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int start_num, int end_num) {
    int count=end_num-start_num;
    int* numlist=(int*)malloc((count+1)*sizeof(int*));
    int num=start_num,i;
    
    for(int i=0;i<=end_num-start_num;i++){
        numlist[i]=num;
        num++;
    }
    
    return numlist;
}