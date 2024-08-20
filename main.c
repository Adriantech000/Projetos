#include <stdio.h>

int main(void) {
  //essa é a primeira atividade
/* 
  float celcius;
  float faren;

  printf("fale a temperatura em graus celcius:\n");
  scanf("%f", &celcius);
  faren = (9 * celcius + 160) / 5;

  if (faren <= 60) {
    printf("ta frio");
  }

  printf("a temperatura em farenrainten é: %f", faren);
*/

  int escolha = 0;
  int npassagem = 0;

  printf("BEM VINDO AO POSTO DO ADRIAN!\n\n");  
  printf("qual tipo de combustivel o seu carro usa? \n1=gasolina\n2=alcool\n3=disel\n4=eletrico\n\n");
  scanf("%d", &escolha);
  printf("-----------------------\n");
  
  if(escolha == 1){
  printf("vá para bomba 01\n\n");
  npassagem = npassagem +1;}
  if(escolha == 2){
  printf("vá para bomba 02\n\n");
  npassagem = npassagem +1;}
  if(escolha == 3){
  printf("vá para bomba 03\n\n");
  npassagem = npassagem +1;}
  if(escolha == 4){
  printf("eletrico? compra um carregador na 25 de março!\n\n");
  npassagem = npassagem +1;}
  
    
  if(npassagem == 1){
  
  }
  else{
    printf("não temos combustivel!");
  }

  printf("VOLTE SEMPRE!");









  


  
  return 0;
}