#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
	if (argc != 2) {
		printf("Usage: %s <password>\n", argv[0]);
		return 1;
	}

	char password[] = "YourPasswordHere";

	if (strcmp(argv[1], password) == 0) {
		printf("Tada! Congrats\n");
	} else {
		printf("Sorry, the password is incorrect\n");
	}

	return 0;
}
