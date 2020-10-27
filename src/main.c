#include<stdio.h>
#include "func.c"



int main(){
  
  Stack s;
  int op;
  char name[100];

  criar(&s);
  do{
  
  menu();
  printf("\n\t digite a opcao:\t");
  scanf("%d",&op);

  switch (op)
  {
  case 1:
      if(cheia(&s) == 1)
      {
          printf("\n\t PILHA CHEIA \n");
      }
      else 
      {
         
            
        printf("\n\t digite um nome:\t");
        scanf("%s",(char*)&name);
          

        empilhar(&s,name);
      }
      break;
  case 2:
      if(vazia(&s) == 1)
      {
          printf("\n\t PILHA VAZIA \n");
      }
      else 
      {
          desempilhar(&s);
      }
      break;
  case 3:
      if(vazia(&s) == 1)
      {
          printf("\n\t PILHA VAZIA \n");
      }
      else 
      {
          list(&s);
      }
      break;
  
  default:
      break;
  }

  }while(op != 0);
    return 0;
}