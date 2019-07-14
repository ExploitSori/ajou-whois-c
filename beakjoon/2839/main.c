#include<stdio.h>
int main(void){
	int x,n=0,tmp;
	scanf("%d",&x);
	if(x<=12){
		
	}
	tmp = x/5;
	x-=tmp*5;
	n+=tmp;
	tmp = x/3;
	x-=tmp*3;
	n+=tmp;
	if(x!=0)
		printf("-1");
	else
		printf("%d",n);



	return 0;
}
