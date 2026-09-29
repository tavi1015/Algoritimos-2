#include <stdio.h>

int main(){
    int A[3][3];

    int *pb[3][3];

    for (int i = 0; i <= 3; i++)
        for (int j = 0; j <= 3; j++)
        {
        pb[i][j]=&A[i][j];
        printf("esse e o endereço do array na posição [%d][%d]: %p\n",i,j,pb[i][j]);
        }
        
    {
       
    }
    

    return 0;
}