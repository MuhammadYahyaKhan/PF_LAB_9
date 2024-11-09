#include<stdio.h>

int main(){
	int n; printf("Enter a number"); scanf("%d",&n);
	
	
	
	for(int i = 1; i <= n;i++){
		// starting 
		int last = 0;
		for(int j = 1; j <= i;j++){
			printf("%d",j);
			last = j;
		}
		//ending
		if(i!= 1){
			for(int j = last-1; j >= 1;j--){
				printf("%d",j);
			}
		}
		
		printf("\n");
	}
	
}