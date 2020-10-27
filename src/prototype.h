#define MAX 4
#define MAX_STRING 100
typedef struct stack Stack;

struct stack {
  
  char name[MAX][MAX_STRING];
  int topo;
};

void menu();
void criar(Stack *s);
int vazia(Stack *s);
int cheia(Stack *s);
void empilhar(Stack *s, char *n);
void desempilhar(Stack *s);
void list(Stack *s);
char retorna_topo(Stack *s);
void esvazia(Stack *s);