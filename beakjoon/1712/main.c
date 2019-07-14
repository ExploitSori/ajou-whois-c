#include<stdio.h>
int main(void){
	int a,b,c,flag=0,n;
	scanf("%d %d %d",&a,&b,&c);
	if(b>=c){
		printf("-1\n");
	}
	else{
		n=a/(c-b);
		printf("%d\n",n+1);
	}
	return 0;
}
