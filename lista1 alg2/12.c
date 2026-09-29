#include <stdio.h>

void num(int n){
    for (int i = 1; i <=n ; i++)
    {
        int tab = i*n;
        printf("%d x %d = %d\n",i,n,tab);
    }
    
    
}

int main (){
    num(5);


    return 0;
}