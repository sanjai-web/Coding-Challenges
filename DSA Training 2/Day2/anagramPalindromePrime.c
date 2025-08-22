
#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int compare(const void* a,const void* b){
    return *(int*)a-*(int*)b;
}
int main() {
   
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int sum=0;
    int pro=1;
    while(n!=0){
        int a=n%10;
        n=n/10;
        sum=sum+a;
        pro=pro*a;
    }
    
   
    printf("sum:%d  product:%d\n\n",sum,pro);
    
    if(sum==1 && pro==1){
        printf("both are not prime numbers");
    }
    else{
    int l=0;
    for(int i=2;i<=sqrt(sum);i++){
        if(sum%i==0){
            printf("%d is not a prime number\n",sum);
            l=1;
            break;
        }
    }
   
     for(int i=2;i<sqrt(pro);i++){
        if(pro%i==0){
            printf("%d is not a prime number\n",pro);
             l=1;
            break;
        }
    }
    if(l==1){
        printf("Both are not a prime number\n");
    }else{
         printf("Both are a prime number\n");
    }
    }
    printf("\n--------------------------------------\n\n");

int tsum=sum;
int revs=0;
int d;
int k=0;
int s[10];
int as[10]={0};


    while(tsum!=0 && k<10){
        int a=tsum%10;
        tsum=tsum/10;
        s[k++]=a;
        as[a]++;
       revs=revs*10+a;
    }
    
//   for(int i=0;i<10;i++){ printf("%d",anas[i]); printf("\n");}
    
int e;
int revp=0;
int tpro=pro;
int l=0;
int p[10];
int anap[10]={0};

    while(tpro!=0 && l<10){
        int a=tpro%10;
        tpro=tpro/10;
        p[l++]=a;
         anap[a]++;
        revp = revp*10+a; 
    }
    
    if(revp==pro && revs == sum ){
        printf("%d %d Both are palindrome\n",sum,pro);
    }else if(revs==sum ){
        printf("%d sum is a palindrome\n",sum);
    }else if (revp==pro ){
        printf("%d product is a palindrome\n",pro);
    } else{
        printf("%d %d both are not palindrome\n" ,sum,pro);
    }
      printf("\n--------------------------------------\n\n");
      
      //Anagrams
      
    int t=0;
     for(int i=0;i<10;i++){
         if(as[i]!=anap[i]){
             t=1;
             break;
         }
     }
    
    if(t){
        printf("%d %d Both are not anagram\n",sum,pro);
    }else{
         printf("%d %d Both are anagram\n",sum,pro);
    }
    
      printf("\n--------------------------------------\n");

   

    return 0;
}