#include<stdio.h>
#include<stdlib.h>
float average(int student,int scores[],int sum){
	int avg=sum/student;
	float pass=0;
	for(int k=0;k<student;k++){
		if(avg<scores[k]){
			pass+=1;
		}
	}
	return (pass/(float)student)*100;
}
int main(void){
	int n,student;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int sum=0;
		scanf("%d",&student);
		int scores[50];//*scores=(int *)malloc(sizeof(int)*n);
		for(int j=0;j<student;j++){
			scanf("%d",&scores[j]);
			sum+=scores[j];
		}
		printf("%.3f%%\n",average(student,scores,sum));
	}

	return 0;
}
