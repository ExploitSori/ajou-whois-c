#include<stdio.h>
int main(void){
	int n;
	int result=0,tmp;
	int i,flag=1;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		result=i;
		tmp=i;
		while(tmp){
			result+=tmp%10;
			tmp/=10;
		}
		if(result==n){
			printf("%d\n",i);
			flag=0;
			break;
		}
	}
	if(flag)
		printf("0\n");

	return 0;
}
