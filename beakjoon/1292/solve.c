#include <stdio.h>
int main(void) {
    int arr[1000], num = 1, a, b, p = 0, j = 0, sum = 0;
	scanf("%d %d",&a,&b);    
for (int i = 0; p < 1000; i++)
    {
        for (j = 0; j <= i; j++)//i만큼 숫자를 넣음
        {
            arr[p++] = num;
            if (p == 1000)
                break;
        }
        num++;
    }
    for (int k = a-1; k <= b-1; k++)
    {
        sum += arr[k];
    }
	printf("%d",sum);
	return 0;
}


