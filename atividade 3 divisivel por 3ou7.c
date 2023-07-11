#include<stdio.h>
void main(){
int valor;

    printf("Entre com o valor: ");
scanf("%i", &valor);

if(valor % 3 == 0 && valor % 7 == 0){
printf("O valor e divisivel por 3 e 7!!");

}else if(valor % 3 == 0){
printf("valor e divisivel por 3!! ");

}else if(valor % 7 == 0){
printf("valor e divisivel por 7!!");

}else{
printf("valor nao e divisivel por 3 e 7!!");

}


}
