/**
* print_num.c
* Prompt: create a .c file that prints numbers 1 to 10, but has 
* an error, so it prints to 11.  Push that file to "master".  Work
* on branch called "b-test", to make a new file that prints letters A-Z.
* Fix print_num.c error on a separate branch called "hotfix".  Merge that
* branch with "master". Delete "hotfix" branch, go back to "b_test" and 
* finish that program.  Merge "b_test" to "master. 
*/

#include <stdio.h>

int main(){

	int i;
	int greatest_num = 10; //print numbers from 0 to highest num
	for (i = 0; i < greatest_num; i++){
		printf("%i\n", i+1);
	}
	
	return 0;

} 
