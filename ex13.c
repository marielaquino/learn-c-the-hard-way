#include <stdio.h>

// For Loops and Arrays of Strings 

int main(int argc, char *argv[])

{ 

	int i = 0;

	for(i = 1; i < argc; i++) {

		printf("arg %d: %s\n", i, argv[i]);
	}

	// create an array of strings 
	char *states[] = {

		"California",
		"Illinois",
		"Maine",
		"Oklahoma"
	};

	int num_states = 4;

	for(i=0; i<num_states; i++) {
		printf("states %d, %s\n", i, states[i]);
	}

	return 0;

	/*
	
	For Loop format:

	FOR (INITIALIZER; TEST; INCREMENT) {
		DO SOMETHING 
	}

	TEST -> a boolean condition that's checked 
	INCREMENT is run after 'DO SOMETHING' is run 


	=== argc/argv notes ===

	-> The OS passes each arg in CLI as a string in argv array. argv[0] is ./ex13.
	-> argc is the number of args in argv. so if you pass one thing, argc = 2 because ./ex13 is the first thing. 


	*/

}