#include<stdio.h>
typedef struct ohm{
	int value;
	unsigned int multiple;
}ohm;
int check(char *color){
	char col[8] = {'r','o','y','g','b','v','g','w'};
	int tmp=0;
	for(int j=0;j<8;j++){
		if(color[0]==col[j]){
			tmp=j+2;
			break;
		}
	}
	if(color[0] == 'b')
		if(color[1]=='l')
			if(color[2]=='a')
				tmp = 0;
			else
				tmp = 6;
		else
			tmp=1;
	return tmp;
}
int pow(int a,int b){
	int i,pow=1;
	for(i=0;i<b;i++)
		pow*=a;
	return pow;
}
int main(void){
	ohm list[10];
	int checked[3];
	for(int i=0;i<10;i++){
		list[i].value=i;
		list[i].multiple = pow(10,i);
	}
	for(int i=0;i<3;i++){
		char color[7];
		scanf("%s",color);
		checked[i] = check(color);
	}
	printf("%d%d\n",list[checked[0]].value,list[checked[1]].value*list[checked[2]].multiple);
	return 0;
}
