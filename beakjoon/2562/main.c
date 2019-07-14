#include<stdio.h>
typedef struct max{
	int num;
	int cnt;
}max;
int main(void){
	int i,tmp;
	max res={0,0};
	for(i=1;i<=9;i++){
		scanf("%d",&tmp);
		if(res.num<tmp){
			res.num=tmp;
			res.cnt=i;
		}
	}
	printf("%d\n",res.num);
	printf("%d",res.cnt);
	return 0;
}
