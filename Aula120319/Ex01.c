#include <stdio.h>
#include <string.h>

int main(){
	char str[15],str2[15];
	strcpy(str,"linguagem");
	strcpy(str2,"C");
	strcat(str,str2);
	
	printf("\n str e': %s quantidade de caracteres %d\n",str,strlen(str));
}
