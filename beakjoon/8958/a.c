#include<stdio.h>
#include<string.h>
int converts(char*);
int main(void){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char* str;
		scanf("%s",str);
		int scores=converts(str);
		printf("%d\n",scores);
	}
	
	return 0;
}
int converts(char* str){
	int cnt=0,score=0;
	int len = strlen(str);
	for(int i=0;i<len;i++){
		if(str[i]=='O'){
			score =score+1+cnt;
			cnt++;
		}
		else{
			cnt=0;
		}
	}
	return score;
}

