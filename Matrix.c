# include <stdio.h>

int main() {
int array[2] [2] = { { 7, 5}, {3, 4} };
int row, col;
for( row = 0; row<2; row++){
	for( col = 0; col<2; col++) {
		printf("%d\t",array[row][col]);
		}
	printf("\n");
	}
return 0;
}

