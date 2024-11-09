#include<stdio.h>
#include<string.h>
int main(){
	// Input string to encrypt
	char string[100]; printf("Enter the text to encrypt : ");gets(string); 
	//Input Cipher key
	char key[100]; printf("Enter the cipher key");gets(key);
	
	// Declare array for enxrypted text
	char encrypted_text[strlen(string) + 1];
	
	// Declare array for long cipher key
	char long_cipher_key[strlen(string) + 1];
	
	//creating long cipher key array
	int index = 0;
	for(int i = 0; i < strlen(string);i++){
		long_cipher_key[i] = key[index];
		index++;
		if(index == strlen(key) ){
			index = 0;
		}
	}
	
	//encryption process
	for(int i = 0; i < strlen(string);i++){
		if(string[i] != 32){
			string[i] = string[i] - 64;
		}
		long_cipher_key[i] = long_cipher_key[i] - 64;
		int c = long_cipher_key[i] + string[i];
		c = c % 26;
		c = c + 64;
		if(string[i] == 32){
			printf(" ");
		}else{
			printf("%c",c);
		}
		
	}
	return 0;
}