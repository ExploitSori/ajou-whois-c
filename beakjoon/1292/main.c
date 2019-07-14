#include<stdio.h>
int main(void){
	int a,b,cnt=0,sum=0,array[1000],num=1,i,j;
	scanf("%d %d",&a,&b);
	for(i=0;cnt<1000;i++){
		for(j=0;j<=i;j++){
			array[cnt++] = num;
			if (cnt==1000)
				break;
			}
		num++;
	}
	for(i=a-1;i<=b-1;i++)
		sum+=array[i];
	printf("%d",sum);


	return 0;
}
