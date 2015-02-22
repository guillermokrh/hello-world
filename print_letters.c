/** print_letters.c
* Print letters from A-Z
* author: Guillermo Rojas Hernandez
*/

#include <stdio.h>

int main() {

	/*	
	int i;
	char to_print;
	for (i = 0, to_print = 'a'; i < 26; i++, to_print++){
		printf("%c\n", to_print);
	}
	*/

	//more concise way of writing program
	char letter;
	for (letter = 'A'; letter <= 'Z'; letter++){
		printf("%c\n", letter);
	}
	return 0;	
}
