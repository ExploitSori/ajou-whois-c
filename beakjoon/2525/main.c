#include<stdio.h>
int main(void){
	int hour,min,ing,tmp;
	scanf("%d %d",&hour,&min);
	scanf("%d",&ing);
	min+=ing;
	tmp=min/60;
	min=min%60;
	hour+=tmp;
	hour=hour%24;
	printf("%d %d",hour,min);

	return 0;
}
