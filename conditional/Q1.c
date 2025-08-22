#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5,t,a;

    printf("Enter the Five Subject Marks:\n");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    printf("Five Subject marks are: %d , %d , %d , %d , %d \n",s1,s2,s3,s4,s5);
    t=s1+s2+s3+s4+s5;
    a=t/5;
    printf("Total Mark: %d \n",t);
    printf("Average Mark: %d \n",a);
    if(s1>=35 && s2>=35 && s3>=35 && s4>=35 && s5 >=35 ){
        if(a>=90 && a<=100){
            printf("Grade A\n");
        }
        else if (a>=80 && a<=89)
        {
            printf("Grade B\n");
        }
        else if (a>=70 && a<=79)
        {
            printf("Grade C\n");
        }
        else{
            printf("No Grade\n");
        }
    }
    else{
        printf("You Are Fail\n");
    }
    return 0;
}