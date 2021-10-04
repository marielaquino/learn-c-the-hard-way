#include <stdio.h>

// Understanding the SIZE of things 
// Arrays are essentially one cohesive box with subsections (rather than linking individual chunks in Python)


int main(int argc, char *argv[])

{

	int areas[] = { 10, 12, 13, 14, 20 };
	char name[] = "Mar";

	char full_name[] = {
		'M', 'a', 'r',
		' ', 'A', '.', ' ',
		'A', 'q', 'u', 'i', 'n', 'o', '\0'
	};


	printf("The size of an int: %ld\n", sizeof(int));

	printf("The size of areas[]: %ld\n", sizeof(areas));

	printf("The number of ints in areas: %ld\n", 

		sizeof(areas) / sizeof(int));

	printf("The size of a char: %ld\n", sizeof(char));

	printf("The size of name[]: %ld\n", sizeof(name));

	printf("The number of chars in name: %ld\n", 

		sizeof(name) / sizeof(char));

	printf("The size of full_name[]: %ld\n", 
		
		sizeof(full_name));

	printf("The number of chars in full_name: %ld\n",

		sizeof(full_name) / sizeof(char));

	printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

	return 0;

}