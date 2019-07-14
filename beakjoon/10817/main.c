#include <stdlib.h>
main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a-(b+c)>=0){
	if(b>c)
		printf("%d\n",b);
	else
		printf("%d",c);
    }
    else if(b-(a+c)>=0){
	if(a>c)
                printf("%d",a);
        else
                printf("%d",c); 
    }
    else if(c-(a+b)>=0){
	if(b>a)
		printf("%d",b);
	else
		printf("%d",a);
    }
    else
        printf("%d",a);
}
