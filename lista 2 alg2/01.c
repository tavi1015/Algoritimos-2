#include <stdio.h>

int main(){
    int a =1;
    int b=2;
    int *pa=&a;
    int *pb=&b;

    printf("esse e o endereço de a: %p\n",pa);
    printf("esse e o endereço de b: %p\n",pb);
    if(pa>pb){
        printf("esse e o maior endereço %p \n",pb);
    }else{
        printf("esse e o maior endereço %p \n",pb);
    }


    return 0;
}