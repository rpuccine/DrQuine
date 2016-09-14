#include <stdio.h>
/*
	this is comment
*/
#define STR "#include <stdio.h>%c/*%c%cthis is comment%c*/%c#define STR %c%s%c%c#define MAIN() int main() {FILE *f = fopen(%cGrace_kid.c%c, %cw+%c); fprintf(f, STR, 10, 10, 9, 10, 10, 34, STR, 34, 10, 34, 34, 34, 34, 10, 10);}%cMAIN()%c"
#define MAIN() int main() {FILE *f = fopen("Grace_kid.c", "w+"); fprintf(f, STR, 10, 10, 9, 10, 10, 34, STR, 34, 10, 34, 34, 34, 34, 10, 10);}
MAIN()
