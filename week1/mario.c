
#include <stdio.h>

int main(void) {
	
	int height, rows, spaces, hashes;
	
	printf("Give the number of steps between 1 and 23:\n");
	
	do {
		scanf("%d", &height);
		
		printf("try again:\n");
	
	} while (height < 0 || height > 23);
	
	for (rows = 0; rows < height; rows++) {
		
		for (spaces = height - rows - 1; spaces > 0; spaces--) {
		
			printf (" ");
		}
		
		for (hashes = 1; hashes < height + rows - 1; hashes++) {
			
			printf ("#");
		}
		
		printf("\n");
	}
	
	return 0;
}