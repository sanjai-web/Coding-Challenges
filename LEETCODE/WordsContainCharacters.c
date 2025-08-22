#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
char words[2][5]={"leet","code"};
char x ='e';

for(int i=0;i<strlen(words);i++){
    for(int j=0;j<strlen(words[i]);j++){
        if(words[i][j]==x){
            printf("word : %d\n",i);
            break;
        }
    }
}

    return 0;
}



// int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {

// int* result=(int* )malloc (wordsSize * sizeof(int));    
// int k=0;
// for(int i=0;i<wordsSize;i++){
//     for(int j=0;j<strlen(words[i]);j++){
//         if(words[i][j]==x){
//             printf("word : %d\n",i);
//             result[k]=i;
//             k++;
//             break;
//         }
//     }
// }