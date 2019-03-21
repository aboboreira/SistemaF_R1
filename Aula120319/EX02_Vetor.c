#include <stdio.h>
#include <string.h>

#define N_ALUNOS 50
#define N_CARACTERES 30

int main(){
	char aluno[N_ALUNOS][N_CARACTERES];
	char melhor_aluno[N_ALUNOS][N_CARACTERES];
	float nota[N_ALUNOS], maior_nota = 0;
	int i;
	char resp = 's';

  
	for(i = 0; i < N_ALUNOS &&(resp =='s' || resp == 'S');i++){
		printf("Digite o nome do aluno: ",i);
		fflush(stdin);
		gets(aluno[i]);
		printf("Digite a nota do aluno: ",i);
		scanf("%f",&nota[i]);
		if(maior_nota < nota[i]){
			maior_nota = nota[i];
			strcpy(melhor_aluno,aluno[i]);
		}
		printf("Cadastrar outro aluno (S/N):  ");
		fflush(stdin);
		resp = getchar();
	}	
   printf("O melhor aluno e' %s e sua nota %0.1f",melhor_aluno,maior_nota);
}   
   



