#include <stdio.h>
#include <string.h>

int menor (int x, int y){
 if (x < y)
{
return x;
}else{
    return y;
} 
}  

int main(){
int x, y, ValorMenor;

printf("Digite um número para x:\n" );
scanf("%d", &x);

printf("Digite um número para y\n");
scanf("%d", &y);

ValorMenor = menor(x,y);
printf ("O menor valor é : %d" , ValorMenor);

return 0;

}
