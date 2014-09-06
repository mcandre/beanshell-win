#include <stdio.h>
#include "join.h"

int main(int argc, char** argv) {
	char *arguments="";

	int i;
	for (i=1; i<argc; i++) {
		arguments=join(arguments, argv[i], " ");
	}

	system(join("java bsh.Interpreter", arguments, " "));

	return 0;
}
