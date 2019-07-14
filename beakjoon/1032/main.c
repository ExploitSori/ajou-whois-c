#include<stdio.h>
#include<string.h>
int strpos(char *str1, char *str2){
	char *p = strstr(str1,str2);
	if(p)
		return p;
	else
		return -1;
}
int main(void){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",&str);
	}


	return 0;
}
