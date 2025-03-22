//Isto é uma biblioteca
#include<stdio.h>

//Função principal
int main(){
	char first = 'G';
	char second = 'G';
	
	printf("Este jogo foi %c%c\n", first, second);
	//Saida: Este jogo foi GG

	// lista de caracter -> string 
	char goodgame[] = {"GG"};
	printf("Este jogo foi %s\n", goodgame);

	printf(		"MEMORY\n"
			"first: %x\n"
			"second: %x\n"
			"goodgame[0]: %x\n"
			"goodgame[1]: %x\n", &first, &second, &goodgame[0], &goodgame[1]);
	//%x hexadecimal 
	// &variavel -> local de memória 
}
