main(){
	int x,n,tmp,i;
	scanf("%d %d",&n,&x);
	int j=5;
	printf("%d \n",j);
	for(i=0;i<n;i++){
		scanf("%d",&tmp);
		if(tmp<x)
			printf("%d ",tmp);
	}

}
