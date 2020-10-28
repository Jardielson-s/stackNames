#include "prototype.h"
#include<stdio.h>
#include<string.h>


void menu(){
    printf("\n\t 1- empilhar");
    printf("\n\t 2- desempilhar");
    printf("\n\t 3- list");
    printf("\n\t 4- retorna topo");
    printf("\n\t 5- esvazia");
    printf("\n\t 6- restaurar sessao\n");
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

    if(s->topo == MAX-1)
      return 1;
    else 
      return 0;
}

void empilhar(Stack *s,char *n,int tam){
  
  s->topo++;
  
      for(int i = 0;i < tam;i++)
      {
         s->name[s->topo][i] = n[i];
      }
    
}

void desempilhar(Stack *s){

  s->topo--;
}

void list(Stack *s,int tam){
  
  int j;
  printf("\n\n\t");
  
  
  for(j = 0;j <= s->topo;j++)
  {
    printf("\n\t name : ");
    for(int i = 0;i < 60;i++)
    {
     printf("%c",s->name[j][i]);
    }
    printf("\n");
  }
     printf("\n\n\t");
}

char retorna_topo(Stack *s,int tam,char *name){
  
  //return printf("%s",(char*)name);
  for(int i = 0;i < 60;i++)
  {
     printf("%c",(char)s->name[s->topo][i]);
  }

}

void esvazia(Stack *s){
   s->topo = -1;
}

void restaurar_sessao(Stack *s){
    
    s->topo = MAX - 1 ;

}

