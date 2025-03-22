#include<stdio.h>

int main() {
	printf("Hello World\n");
	// \n pula linha
	
	printf("Primeira linha\nSegunda Linha");

	//Separação para ficar mais bonito o código 
	printf("Primeira linha\n"
			"Segunda linha");

	printf("\nA luz percorre aproximadamente %d m/s \n", 299792458);
	// %d inteiro, depois da palavra utiliza ',' e coloca em ordem os operadores, no caso 13 e 22 separados por virgula

	printf("\n%c significa metros e %c significa segundos\n", 'm', 's');
	// %c caracter
	
	printf("\n A luz do %s demora aproximadamente %d minutos para chegar na %s\n", "Sol", 8);

}
