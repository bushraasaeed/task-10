#include<stdio.h>
int main(){
	int i,j;
    int subj,stds;

	printf("enter the number of students: ");
	scanf("%d",&stds);
	printf("enter the number of subjects: ");
	scanf("%d",&subj);
		int marks[stds][subj],transpose[subj][stds];
		printf("enter marks for following:\n ");
	for(i=0;i<stds;i++){
		for(j=0;j<subj;j++){
			printf("student %d: \n subject: %d \n",i+1,j+1);
			scanf("%d",&marks[i][j]);
		}
	}
	for(i=0;i<stds;i++){
		for(j=0;j<subj;j++){
		transpose[j][i]=marks[i][j];
		}
	}
	printf("orignal: \n");
for(i=0;i<stds;i++){
		for(j=0;j<subj;j++){
			printf(" %d",marks[i][j]);
			
		}
		printf("\n");
	}
	printf("transposed: \n");
	for(i=0;i<subj;i++){
		for(j=0;j<stds;j++){
		printf(" %d",transpose[i][j]);
			
		}
		printf("\n");
	}
	
	
	
	
return 0;	
}
