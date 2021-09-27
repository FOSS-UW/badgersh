/*
**	badgersh
**
**	A minimal, limited shell with unlimited potential.
**
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int command_loop() {
	char cwd[PATH_MAX];
	char command[100];

	while(1) {
		printf("%s >$", getcwd(cwd, sizeof(cwd)));
		fgets(command, 100, stdin);
	}
	
	return 0;
}

int main(int argc, char **argv) {
	command_loop();

	return EXIT_SUCCESS;
}
