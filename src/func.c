#include "prototype.h"
#include<stdio.h>
#include<string.h>


void menu(){
    printf("\n\t 1- empilhar");
    printf("\n\t 2- desempilhar");
    printf("\n\t 3- list");
    printf("\n\t 4- retorna topo");
    printf("\n\t 5- esvazia\n");
}

void criar(Stack *s){
   
   for(int i = 0;i < MAX;i++)
   {
       for(int j = 0;j < MAX_STRING;j++)
       {
          s->name[i][j] = 0;
       }
   }

   s->topo = -1;
}

int vazia(Stack *s){

    if(s->topo == -1)
      return 1;
    else 
      return 0;
}

int cheia(Stack *s){

    if(s->topo == MAX)
      return 1;
    else 
      return 0;
}

void empilhar(Stack *s,char *n){
  
  char aux[100];
  strcpy(aux,n);
  printf("\n\t %s ",aux);
  
  for(int j = 0;j > MAX;j++)
  {
      for(int i = 0;i < strlen(aux);i++)
      {
         s->name[j][i] = sizeof(n);
      }
      s->topo++;
  }
}

void desempilhar(Stack *s){

  s->topo--;
}

void list(Stack *s){
  
  for(int j = 0;j > MAX;j++)
  {
      for(int i = 0;i < MAX_STRING;i++)
      {  
         printf("\t %s ",(char*)sizeof(s->name[j][i]));
      }
      printf("\n");
  }
}

char retorna_topo(Stack *s){
 
    for(int i = 0;i < MAX_STRING;i++)
    {
     return s->name[s->topo][i];
    }
}

void esvazia(Stack *s){
   s->topo = -1;
}


