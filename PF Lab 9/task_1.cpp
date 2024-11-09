#include<stdio.h>

void draw(int n){
	//upper part 
	for(int i = 1; i <= n+1;i++){
		// loop to print stars
		for(int j = i;j <=n+1;j++){
			printf(" * ");
		}
		// loop to print o
		for(int k = 1; k <= i;k++){
			printf("o");
		}
		
		printf("\n");
	}
	
	// lower part
	for(int i = 1; i <= n; i++){
		// loop to print stars
		for(int j = -1; j<=i;j++){
			printf(" * ");
		}
		// loop to print o
		for(int k = n;k >=i; k--){
			printf("o");
		}
		printf("\n");
	}
	
	
}


int main(){
	
	draw(10);
	
	
	return 0;
}