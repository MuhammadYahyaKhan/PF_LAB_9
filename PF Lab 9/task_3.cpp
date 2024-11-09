#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
	char admin[] = "user";
	char password[] = "abc";
	char input_user_name[50] = "";
	char input_password[50] = "";
	printf("Enter user name\n");
	scanf("%s",&input_user_name);
	printf("Enter password\n");
	scanf("%s",&input_password);
	
	if( strcmp(admin,input_user_name) == 0 && strcmp(password,input_password) == 0 ){
		printf("Access granted");
	}
	else{
		printf("Access denied");
	}
	return 0;
}