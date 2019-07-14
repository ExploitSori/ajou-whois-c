#include<stdio.h>
int main(void){
	int input[3]={0},i,j,tmp;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&tmp);
			input[i]+=tmp;
		}
	}
	for(i=0;i<3;i++){
		if(input[i]==3)
			printf("A\n");
		else if(input[i]==2)
			printf("B\n");
		else if(input[i]==1)
			printf("C\n");
		else if(input[i]==4)
			printf("E\n");
		else
			printf("D\n");
	}

}
