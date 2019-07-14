#include<stdio.h>
#include<stdlib.h>
int main(void)
{
   int num;
   scanf("%d", &num);
   for (int i = 0; i < num; i++)
   {
      int n, count = 0;
      int sum = 0;
      scanf("%d", &n);
      int* a = (int*)malloc(sizeof(int) * n);
      for (int k = 0; k < n; k++)
      {
         scanf("%d", &a[k]);
         sum += a[k];
      }
      double avr = (double)sum / n;
      for (int k = 0; k < n; k++)
      {
         if (a[k] < avr) count++;
      }
      double per = (double)count / n * 100;
      printf("%.3lf%%\n", per);
      free(a);
   }
}
