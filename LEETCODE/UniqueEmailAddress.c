#include<stdio.h>
#include<math.h>
#include <ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){

    char emails[]={"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
    char e[20];
    int k=0;
    
    char copy[100];
    char* p;
    p=strstr(emails,"@");
    printf("values : %s\n",p);

   
for(int i =0;i<n;i++){
    if(emails[i]=='@'){ break;}
    else if(emails[i]=='.'){continue;}
    else if(emails[i]=='+'){break; }
    else{e[k++]=emails[i];}

}

e[k]='\0';
printf("%s\n", e);
strcpy(copy,e);
strcat(copy,p);
printf("final : %s\n", copy);

    return 0;
}










// #include<stdio.h>
// #include<math.h>
// #include <ctype.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){

//     char emails[]="m.y+name@gmail.com";
//     char e[20];
//     int k=0;
//     int n= strlen(emails);
//     char copy[100];
//     char* p;
//     p=strstr(emails,"@");
//     printf("values : %s\n",p);
// for(int i =0;i<n;i++){
//     if(emails[i]=='@'){ break;}
//     else if(emails[i]=='.'){continue;}
//     else if(emails[i]=='+'){break; }
//     else{e[k++]=emails[i];}

// }

// e[k]='\0';
// printf("%s\n", e);
// strcpy(copy,e);
// strcat(copy,p);
// printf("final : %s\n", copy);

//     return 0;
// }
