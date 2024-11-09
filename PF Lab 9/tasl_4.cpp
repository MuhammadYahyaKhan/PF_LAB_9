#include<stdio.h>
#include<string.h>
int main(){
	char students[3][100] = {"ALice","Ahmed","Ali"};
	char name[50];
	printf("Enter the name : ");
	scanf("%s",name);
	int not_found = 0;
	for(int i = 0; i < 3; i++){
		if( strcmp(name,students[i]) == 0  ){
			printf("found");
			not_found = 0;
			break;
		}
		else{
			not_found = 1;
		}
	}
	if(not_found == 1){
		printf("not found");
	}
	
	
	return 0;
}