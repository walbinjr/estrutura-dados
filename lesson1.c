#include <stdio.h>

struct pos {
	int x;
	int y;
	int z;

	struct pos *next;
};

int main(int argc, char *argv[]) {
	struct pos position;
	struct pos position2;
	position.x = 20;
	position.y = 30;
	position.z = 40;
	position.next = NULL;

	position2.x = 50;
	position2.y = 60;
	position2.z = 70;
	position2.next = NULL;

	printf("position: %d,%d,%d\n", position.x, position.y, position.z);
	printf("position2: %d,%d,%d\n", position2.x, position2.y, position2.z);

	return 0;
}
