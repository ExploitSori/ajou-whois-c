#include<stdio.h>
int main(void){
	int input,tmp,check,res=0;
	scanf("%d",&input);
	if(input==8){
		check=input-1;
		tmp=1;
	}
	else if(input ==1){
		check=input+1;
		tmp=2;
	}
	else
		res=1;
	for(int i=0;i<7;i++){
		scanf("%d",&input);
		if(res!=0)
			continue;
		if(check!=input)
			res=1;
		if(tmp==1){
			check--;
		}
		else if(tmp==2){
			check++;
		}
	}
	if(res==0){
		switch(tmp){
			case 1:
				printf("descending");
				break;
			case 2:
				printf("ascending");
				break;
			default:
				break;
		}
	}
	else
		printf("mixed");


	return 0;
}
