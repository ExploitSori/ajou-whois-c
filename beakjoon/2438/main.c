main(){
	int line,star,n;
	scanf("%d",&n);
	for(line=0;line<n;line++){
		for(star=0;star<=line;star++){
			printf("*");
		}
		printf("\n");
	}
}
