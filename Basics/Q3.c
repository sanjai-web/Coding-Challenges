// If the marks obtained by a student in five different subjects are input through the keyboard,
// find out the aggregate marks and percentage marks obtained by the student. Assume that
// the maximum marks that can be obtained by a student in each subject is 100.


#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5;
    
    printf("ENter 5 Sub Marks:");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    int total=m1+m2+m3+m4+m5;
    printf("\n Total : %d",total);
    float avb=total/5;
    printf("\n Average :%f ",avb);
    return 0;

}