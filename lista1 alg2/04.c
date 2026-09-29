#include <stdio.h>

void idade(int anos,int meses,int dias){
    int final=(anos*365)*(meses*30)+dias;
    printf("essa e a sua idade em dias: %d",final);

}
int main(){
    idade(10,5,56);

    return 0;
}