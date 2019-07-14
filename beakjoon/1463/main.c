#include<stdio.h>
int main(void){
	int input,cnt=0;
	scanf("%d",&input);
	while(input!=1){
		if(input%3 == 0){
			input=input/3;
			cnt++;
		}
		else if(input%2==0){
			input = input/2;
			cnt++;
		}
		else{
			input -=1;
			cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
