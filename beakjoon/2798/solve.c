#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,m,i,j,k,result=0;
    scanf("%d %d", &n, &m);
    int *cards=(int *)malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++){
    	scanf("%d", &cards[i]);
    }

    for (i = 0; i < n; i++) {
    	for (j = 0; j < n; j++) {
    		for (k = 0; k < n; k++){
        		if (i != j && j != k && k != i) {
            		int tmp = cards[i] + cards[j] + cards[k];
            		if (tmp <= m && result < tmp)
				result = tmp;
        		}
    		}
		}
	}
    printf("%d", result);

    return 0;
}
