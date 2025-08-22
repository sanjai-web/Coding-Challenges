#include<stdio.h>
#include<string.h>

int main(){
    char s[40] = "CODINGMART TECHNOLOGIES";
    int row = 4;
    //   char s[20]="MY NAME IS";
    // int row =3;
    
    char mat[20][20];
    int n = 0;

    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < 20; j++){  
            mat[i][j] = '0';
        }
    }

   
    for(int j = 0; j <= row; j++){
        for(int i = 0; i <= row + 1 && n < strlen(s); i++){
            if(s[n] == ' '){
                mat[j][i] = '*';
            } else {
                mat[j][i] = s[n];
            }
            n += row;
        }
        n = j + 1;
    }

    
    printf("Desired Output:\n");
    for(int i = 0; i < row; i++){
        
        for(int k = 0; k < i ; k++){
            printf("*");
        }
       

        for(int j = 0; j <= row + 1; j++){
            if(mat[i][j] != '0'){
                printf("%c", mat[i][j]);
            }
        }
        // printf("\n");
    }

    return 0;

}