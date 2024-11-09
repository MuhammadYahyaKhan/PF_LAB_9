#include<stdio.h>

int main(){
	int b;printf("Number of bolts : ");scanf("%d",&b);
	int n;printf("Number of nuts : ");scanf("%d",&n);
	int w;printf("Number of washer : ");scanf("%d",&w);
	
	// check
	printf("1.Check the order\n");
	if(n!= b){
		
		if(n > b){
			printf("too few bolts\n");
		}
		else{
			printf("to few nuts\n");
		}
	}else{
		printf("correct order\n");
	}
	printf("2. check order\n");
	if(b!= (2*w)){
		if(b > 2*w){
			printf("to few washers\n");
		}
		else{
			printf("to few bolts\n");	
		}
	}
	else{
		printf("correct order\n");
	}
}