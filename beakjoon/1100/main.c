#include<stdio.h>
int main(void){
	int cnt=0;
	char tmp;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			scanf("%c",&tmp);
			if(tmp=='F'){
				if(i%2==0)
					if(j%2==0)
						cnt++;
			else
				if(j%2==1)
					cnt++;
			}
		}
		scanf("%c",&tmp);
	}
	printf("%d",cnt);
	return 0;
}
