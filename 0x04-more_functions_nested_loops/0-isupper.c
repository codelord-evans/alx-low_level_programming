#include<stdio.h>

int main()

{

		char ch;

		printf("\nenter a character");

		scanf("%c", ch);

		if(ch >='A'&& ch <= 'Z')

			printf("character is uppercase");

		else

			printf("character is not uppercase");

		return 0;

}
