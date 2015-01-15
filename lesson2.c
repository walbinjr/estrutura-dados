#include <stdio.h>
#include <malloc.h>

// Declara estrutura pos com membros inteiros x, y, z e o ponteiro (*) next
struct pos {
	int x;
	int y;
	int z;
	struct pos *next;
};

// Função principal
int main(int argc, char *argv[]) {
	// Declara a variavel Position do tipo struct pos
	struct pos Position;

	// Atribui valores aos membros de Position
	Position.x = 10;
	Position.y = 20;
	Position.z = 30;
	Position.next = NULL;

	// Aloca memória dinamicamente e retorna o endereço para o ponteiro Position.next
	// Agora Position.next aponta para uma área de memória reservada por malloc
	// O trecho (struct pos *) é um typecasting para o retorno de maloc que é do tipo void*
	Position.next = (struct pos *) malloc(sizeof(struct pos));

	// Atribui valores aos membros de Position.next que é um ponteiro e por isso são acessados com o operador ->
	Position.next->x = 1;
	Position.next->y = 2;
	Position.next->z = 3;
	// Atribui-se ao ponteiro Position.next->next um endereço/valor NULL
	Position.next->next = NULL;

	// Output de Position
	printf("Position:\nAddr:\t%p\nx:\t%i\ny:\t%i\nz:\t%i\nnext:\t%p\n\n", &Position, Position.x, Position.y, Position.z, Position.next);

	// Output de Position.next
	// Repare que o valor impresso na linha Addr é o mesmo valor da linha Position.next
	printf("Position.next:\nAddr:\t%p\nx:\t%i\ny:\t%i\nz:\t%i\nnext:\t%p\n\n", Position.next, Position.next->x, Position.next->y, Position.next->z, Position.next->next);

	// Libera o endereço/ponteiro alocado dinâmicamente
	free(Position.next);	

	return 0;
}

