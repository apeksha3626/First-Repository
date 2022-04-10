#include<stdio.h>
main(){
	printf(" Program to display pattern in C programming");  //changes
	int i,j,n,k;
	printf("Enter number of rows for pattern ::");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		
		for(k=n-i;k>=1;k--){
			printf("  ");
		
							}
			for(j=1;j<=i;j++){
				printf("%d",j);
		
								}
			
	}
}



















