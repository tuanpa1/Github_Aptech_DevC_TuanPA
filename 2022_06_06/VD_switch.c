#include <stdio.h>

void main(){
	char ch;
	printf("\nEnter a lower cased alphabet [a-z]: ");
	scanf("%c", &ch);
	if (ch <'a'|| ch >'z')
		printf("\nCharacter not a lower cased alphabet");
		else
		switch (ch){
			case 'y' :
			case 'e' :
			case 'u' :
			case 'a' :
			case 'i' :
			case 'o' :
				printf("\nCharacter is a vovel");
				break;
			case 'z' :
				printf("\nLast alphabet (z) was entered");
				break;
			default :
				printf("\nCharacter is a consonant");
				break;
		}
}
