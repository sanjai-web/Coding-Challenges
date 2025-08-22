#include<stdio.h>
#include<math.h>
#include <ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){

char s[100]="PAYPALISHIRING";
int numRows=3;
int n=strlen(s);
int d=0;

while(d!=numRows){
for(int i=d;i<n;i+=numRows+1){
    printf("%c",s[i]);
}
d++;
}
    return 0;
}

// PAHNAPLSIIGYIR