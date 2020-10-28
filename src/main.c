#include<stdio.h>
#include<string.h>
#include "func.c"



int main(){
  
  Stack s;
  int op;
  char name[200];

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
        setbuf(stdin,NULL);
        scanf("%[^\n]s",(char*)&name);
        
        const int aux1 = (int)strlen(name);

        empilhar(&s,name,aux1);
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
          const int aux1 = (int)strlen(name);
          list(&s,aux1);
      }
      break;
    case 4:
      if(vazia(&s) == 1)
      {
          printf("\n\t PILHA VAZIA \n");
      }
      else 
      {
          const int aux1 = (int)strlen(name);
          printf("\n\t name = ");
          retorna_topo(&s,aux1,name);
          printf("\n");
      }
      break;
    case 5:
      if(vazia(&s) == 1)
      {
          printf("\n\t PILHA VAZIA \n");
      }
      else 
      {
          esvazia(&s);
      }
      break;
    case 6:
      if(cheia(&s) == 1)
      {
          printf("\n\t PILHA CHEIA \n");
      }
      else 
      {
          restaurar_sessao(&s);
      }
  }

 
  }while(op != 0);

   return 0;
}