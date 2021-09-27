//Switch Statements 

//A switch statement is similar to if-then statements, but because there's no true booleans (they evaluate to numeric values), the top of the switch will "jump" to the part that matches the calculated value.
// These are also called jump tables. 

#include <stdio.h>

int main(int argc, char *argv[]) 

{
	if (argc != 2) {
		printf("ERROR: You only need one argument. \n");
		return 1; // This is how you abort a program
	}

	int i=0;
	for (i=0; argv[1][i] != '\0'; i++) {
		char letter = argv[1][i];

		switch (letter) {
			case 'a':
			case 'A': 
				printf("%d: 'A'\n", i);
				break;

			case 'e':
			case 'E':
				printf("%d: 'E'\n", i);
				break;

			case 'i':
			case 'I':
				printf("%d: 'I'\n", i);
				break;

			case 'y':
			case 'Y':
				if (i > 2) {
					// it's only sometimes Y
					printf("%d: 'Y'\n", i);
				}

				break;

			default:
				printf("%d: %c is not a vowel\n", i, letter);

		}

	}

	return 0;
}


 

