#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

char s[]=" fly me to moon ";
int i,c=0;

char a[20]={0};

printf("%s\n",s);
printf(" str len : %d\n",strlen(s));
int len = strlen(s);
 while (len > 0 && s[len - 1] == ' ') {
        len--;
    }

for(i=strlen(s)-1;i>=0;i--){
   
    
    
    if(s[i]==' '){
        break;
    }

     printf(" values %c\n",s[i]);
    a[c]=s[i];
    c++;
}
printf("%s\n",a);


int b= strlen(a);
printf("%d\n",b);
// for (i = 0; i < c / 2; i++) {
//         char temp = a[i];
//         a[i] = a[c - i - 1];
//         a[c - i - 1] = temp;
//     }


// printf("%s\n",a);
    return 0;
}
