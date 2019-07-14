#include<stdio.h>
#include<stdlib.h>
int main(void){
	int n,cnt,t,i;
	scanf("%d",&t);
	for(int test =0;test<t;test++){
		cnt=0;
	scanf("%d",&n);
	int *room=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		room[i]=1;
	for(i=0;i<n;i++){
		for(int j=i;j<n;j=j+(i+1)){
				if(room[j]==1)
					room[j]=0;
				else
					room[j]=1;
		}
	}
	for(i=0;i<n;i++){
		if(room[i]==0)
			cnt++;
	}
	printf("%d\n",cnt);
	free(room);
	}
	return 0;
}
