#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){
int k=0,c=0;
int a[3][4]={{4, 3, 8, 9}, {6, 10, 7, 7}, {1, 3, 9, 5}};    //a ==2
int len=sizeof a/sizeof a[0];   //2
int size=sizeof a[0]/sizeof a[0][0];   //2
int b[len*size];

for(int i=0;i<len;i++){
    for(int j=0;j<size;j++){    
       
b[k++]= a[i][j] ;    //b[0]= 4
    }
}

for(int i=0;i<k;i++){
    printf("array values %d\n",b[i]);
}


printf("Element %d\n",k);

int visit=b[0];       //4


for(int i=0;i<k;i++){
    for(int j=i+1;j<k;j++){
       
         if(b[i]==b[j] && visit!=b[j]){
    c=b[j];
     visit=b[i];
         }
    }
}
printf("repeat element %d\n",c);


int lar=b[0];
for(int i=0;i<k;i++)
{
    if(b[i]>lar){
        lar=b[i];
    }
}

printf("large element %d\n",lar);



    int totalElements = lar; // Assuming the range is from 1 to the largest value
    int expectedSum = (totalElements * (totalElements + 1)) / 2; // Sum of 1 to largest value
    int actualSum = 0;
    for (int i = 0; i < k; i++) {
        actualSum += b[i];
    }

    int missingElement = expectedSum - actualSum + c; // Adjust for the repeated element
    printf("Missing element: %d\n", missingElement);


    return 0;
}

