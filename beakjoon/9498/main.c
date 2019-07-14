#include<stdio.h>
int main(void){
	int score;
	char scores[] = "FFFFFFDCBAA";
	scanf("%d",&score);
	score=score/10;
	printf("%c\n",scores[score]);


	return 0;
}
