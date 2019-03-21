#include <stdio.h>
#include <string.h>

int main() {
char nome[30], copia[200] , todos[200] = {'\0'};
strcpy(nome,"- ");
while (strcmp(nome,"fim") !=0){
     strcat (todos,nome);
     strcpy(copia,nome);
     printf("\n todos = %s ",todos);
     printf("\n copia = %s ",copia);
     printf("\n digite o nome da pessoa ou fim para encerrar:");
    gets(nome);
}
printf("\n todos = %s",todos);
printf("\n comprimento da string todos = %d", strlen(todos));
printf("\n copia = %s",copia);
printf("\n comprimento da string copia = %d\n", strlen(copia));

}
