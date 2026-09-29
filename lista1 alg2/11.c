#include <stdio.h>

void tri(float x, float y, float z){
    if(x<y+z&&y<x+z&&z<x+y){
    
        if(x==y&&x==z&&y==z){
            printf("triangulo equilatero");

        }
        if(x==y||x==z||y==z){
            printf("triangulo isoceles");
        }
        if(x!=y&&x!=z&&y!=z){
            printf("triangulo escaleno");
        }
    
    }else{
        printf("nao eh um trinagulo");
    }


}

int main(){
    tri(4,5,43);


    return 0;
}