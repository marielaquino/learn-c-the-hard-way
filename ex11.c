#include <stdio.h>


int main(int argc, char *argv[]) 

{

	int numbers[4] = { 0 };

	char name[4] = { 'a' };

	printf("numbers: %d, %d, %d, %d\n", 
		numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("name each: %c, %c, %c, %c\n",
		name[0], name[1], name[2], name[3]);

	printf("name: %s\n", name);


	// set up 
	numbers[0] = 0;
	numbers[1] = 1;
	numbers[2] = 2;
 	numbers[3] = 3;

 	name[0] = 'M';
 	name[1] = 'a';
 	name[2] = 'r';
 	name[3] = '\0';

 	printf("Now printing initialized.");

 	printf("numbers: %d, %d, %d, %d\n", 
		numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("name each: %c, %c, %c, %c\n",
		name[0], name[1], name[2], name[3]);

	printf("name: %s\n", name);


	// another way to use name? 

	char *another = "Mar";

	printf("another: %s\n", another);

	printf("another each: %c, %c, %c, %c\n",
		another[0], another[1], another[2], another[3]);

	return 0;

	

	/*
	EXTRA CREDIT & NOTES 

	// C doesn't differentiate between strings and arrays of characters 
	// char *stringliteral = "literal" is usual syntax 

	If an array of characters is 4 bytes long, and an integer is 4 bytes long, then can you treat the whole name array like it’s just an integer? How might you accomplish this crazy hack?
	 */ 

}