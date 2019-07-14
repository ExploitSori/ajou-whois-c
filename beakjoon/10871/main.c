#include<stdio.h>
#include<stdlib.h>
main(){
	int n,x,i;
	int *head=(int *)malloc(sizeof(int));
	int cnt=0,tmp;
	scanf("%d %d",&n,&x);
	for(i=0;i<n;i++){
		scanf("%d",&tmp);
		if(tmp<x){
			head[cnt]=tmp;
			&head[cnt+4]=(int *)malloc(sizeof(int));
		}
	}
	printf("%d",head[0]);
}
