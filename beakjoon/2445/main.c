main(){
	int line,lstar,rstar,n,space;
	scanf("%d",&n);
	
	for(line=0;line<n*2-1;line++){
		if(line<n){
		for(lstar=0;lstar<=line;lstar++){
			printf("*");
		}
		for(space=1;space<=(n*2-(line+1)*2);space++){
			printf(" ");
		}
		for(rstar=0;rstar<=line;rstar++){
			printf("*");
		}
		}
		else{
                for(lstar=line-n;lstar<line-(line-n)-1;lstar++){
                        printf("*");
                }
                for(space=0;space<=(line-n)*2+1;space++){
                        printf(" ");
                }
                for(rstar=line-n;rstar<line-(line-n)-1;rstar++){
                        printf("*");
                }
		}
		printf("\n");
	}
}
