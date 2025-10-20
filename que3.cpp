#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c,i,j,k;
	printf("enter robot joint number: ");
	scanf("%d",&a);
	printf("enter different movment numbers: ");
	scanf("%d",&b);
		printf("enter readings numbers: ");
	scanf("%d",&c);
	int robotic[a][b][c];
	printf("input readings for : ");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf(" joint: %d, movement: %d \n ",i+1,j+1);
			for (k=0;k<c;k++){
			scanf("%d",&robotic[i][j][k]);	
			}	
	}
	}
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			for (k=0;k<c;k++){
				robotic[i][j][k]=abs(robotic[i][j][k]);
			}
		}
		
			}
//new
for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf(" joint: %d, movement: %d \n ",i+1,j+1);
			for (k=0;k<c;k++){
			printf("%d ",robotic[i][j][k]);	
			}
			printf("\n");
		}
	}

	
return 0;
}

