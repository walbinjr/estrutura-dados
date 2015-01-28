#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct pos {
	int x;
	int y;
	int z;
	struct pos *next;
};

struct pos *addpos() {
	struct pos *position = NULL;
	
	position = (struct pos *) malloc(sizeof(struct pos));
	
	if (position == NULL) {
		printf("Erro ao alocar memória\n");
		exit(1);
	}

	return position;
}

int count(struct pos *inicio) {
	int result = 0;
	struct pos *cursor = inicio;
	if(inicio != NULL) {
		while (cursor) {
			result++;
			cursor = cursor->next;
		}
	}

	return result;
}

int main(int argc, char *argv[]) {
	struct pos *topo = NULL;
	printf("Tamanho da lista: %i\n", count(topo));

	struct pos *position1 = NULL;
	position1 = addpos();

	topo = position1;

	printf("Tamanho da lista: %i\n", count(topo));
	position1->x = 10;
	position1->y = 20;
	position1->z = 30;
	position1->next = addpos();
	
	printf("Tamanho da lista: %i\n", count(topo));
	position1->next->x = 900;
	position1->next->y = 800;
	position1->next->z = 700;
	position1->next->next = NULL;


	return 0;
}

