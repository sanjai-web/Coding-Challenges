#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
char s[100],temp[1000],rev[1000];
printf("Enter a string:");
gets(s);

if (s[0] == ' ') {
    
    return 1;
}
else{
    
int j=0;
//remove special character and space
for(int i=0;i<=strlen(s);i++){

    if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9'){

       
        temp[j++]=s[i];
     
}

}


//smaller case

for (int i=0;i<=strlen(temp);i++){
    if(temp[i]>='A'&& temp[i]<='Z'){
        temp[i]=temp[i]+32;
    }else if((temp[i]>='a'&& temp[i]<='z') || (temp[i]>='0'&& temp[i]<='9')){
        temp[i]=temp[i];
    }
}

printf("%s\n",temp);

int z=0;

for (int i = strlen(temp)-1; i >=0; i--)    //sanjai
{
   rev[z]=temp[i];
   z++;
}



//PALINDROME
int t=0;;
for(int i=0;i<=strlen(temp);i++){
    if(temp[i]==rev[i]){
        t=1;
    }
    else{
       t=0;
       break;
    }
}

if(t==1){
    printf("The string is palindrome");
    return 1;
}
else{
    printf("The string is not palindrome");
    return 0;
}

















}
   return 0;
}