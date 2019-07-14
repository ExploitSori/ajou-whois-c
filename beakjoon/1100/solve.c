#include<stdio.h>
int main(void)
{
    int num1;
    int num2;
    
    while (num1 != 0, num2 != 0)
    {
        scanf("%d", &num1);
        scanf("%d", &num2);

        if (num1 % num2 == 0 )
            printf("multiple");
    
        else if  (num2 % num1 == 0)
            printf("factor");
        
        else
            printf("neither");

        if (num1==0,num2==0)
        break;
  }
    return 0;
}
