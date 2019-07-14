#include<stdio.h>
int main(){
	int input;
	int count = 0;
	
	scanf("%d", &input);
	
	while(input > 0){
		if(input % 5 == 0){
			input -=5;
			count++;
			printf("1\n");
		}
		else if(input % 3 ==0){
			input -=3;
			count++;
			printf("2\n");
		}
		else if(input > 5){
			input -=5;
			count++;
			printf("3\n");
		}
		else{
			count = -1;
			break;
		}
		
	}
	printf("%d", count);
}
