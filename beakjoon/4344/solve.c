#include<stdio.h>
#include<stdlib.h>
int main(void){
	int n=0, student;

	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&student);
		int *scores=(int *)malloc(sizeof(int)*student);
		int sum = 0;
		float average=0;
		for(int j=0;j<student;j++){
			scanf("%d",&scores[j]);
			sum+=scores[j];
		}
		average = sum/student;
		int cnt=0;
		for(int j=0;j<student;j++){
			if(average<scores[j])
				cnt++;
		}
		free(scores);
		printf("%.3f%%\n",(float)cnt/student*100);
	}
	return 0;

}
