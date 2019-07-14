#include<stdio.h>
#include<stdlib.h>
int sizeCheck(int *arr){
	int result;
	result = sizeof(arr)/sizeof(int);
	return result;
}
int main(void){
	int n,m,i;
	int point[3] = {0,0,0};
	scanf("%d %d",&n,&m);
	int *ptr=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&ptr[i]);
	}
	int avg = m/3;
	int flag = 0;
	for(i=0;i<n;i++){
		if(avg == ptr[i]){
			flag = i;
			break;
		}
	}
	if(flag >=n-1){
		point[0] = n-3;
		point[1] = n-2;
		point[2] = n-1;
	}
	else if(flag <= 0){
		printf("@\n");
		point[0] = 0;
		point[1] = 1;
		point[2] = 2;
	}
	else{
		printf("#\n");
		point[0] = flag-1;
		point[1] = flag;
		point[2] = flag+1;
	}
	int bigflag = 0,smallflag = 0;
	while(1){
		int sum = ptr[point[0]]+ptr[point[1]]+ptr[point[2]];
		if(sum == m)
			break;
		else if(sum>m){
			bigflag=1;
			if(bigflag==1 && smallflag==1)
				break;
			if(point[0] == 0)
				break;
			if(point[0]-1 == 0){
				if(point[1]-1==1)
					point[2]-=1;
				else point[1]-=1;
			}
			else
				point[0]-=1;

			
		}
		else{

			smallflag=1;
			if(bigflag==1&&smallflag==1)
				break;
			if(point[2]==n-1)
				break;
			if(point[2]+1 >= n-1){
				if(point[1]+1 >=n-2){
					point[0]+=1;
				}
				else{
					point[1]+=1;
				}
			}
			else
				point[2]+=1;

		}
	}
	
	printf("%d\n",ptr[point[0]]+ptr[point[1]]+ptr[point[2]]);
	return 0;

}
