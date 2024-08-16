#include <stdio.h>

int main(){
	char name[100]; // allocate 100 characters to char array
	printf("Your name is: "); 
	scanf("%99s", name); // scan 99 characters in name
	
	char statement[] = "Hello";
	printf("%s %s\n", statement, name);
	
	return 0;
}
