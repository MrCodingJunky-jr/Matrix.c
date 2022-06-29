#include <stdio.h>

int main()
{
	int r, c;
	int i, j;
	printf("enter the number of rows: ");
	scanf("%d",&r);
	printf("enter the number of columns: ");
	scanf("%d",&c);
	int arr[r][c];
	
	for(i=0; i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter for position arr[%d][%d]:",i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("\n The matrix is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
