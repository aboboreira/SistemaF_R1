#define
 N_ALUNOS 4
#define
 N_CARACTERES 30

int main() {
char nome[N_ALUNOS][N_CARACTERES];
int i;

for (i=0; i<N_ALUNOS ; i++){
printf("digite o nome do aluno: ");
fflush(stdin);
gets(nome[i]);
}
}
