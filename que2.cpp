#include <stdio.h>

int main(){
	int i,j;
	int r=3,c=3;
	int matrix1[r][c];
	int matrix2[r][c];

	printf("enter value for quat 1:");
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&matrix1[i][j]);
		}
	}	

	printf("enter value for quat 2:");
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&matrix2[i][j]);
		}
	}	   

	int total[3][3]={0};		

	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		total[i][j]=matrix1[i][j]	+ matrix2[i][j];
		}
	}
	
	printf("total sales:\n");
	
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("%d\t",total[i][j]);	
	}

		printf("\n");

}
	return 0;
}
