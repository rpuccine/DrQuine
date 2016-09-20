#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NB 5
#define FILE_NAME(NB) Sully_##NB
#define FILE(NB) FILE_NAME(NB)
#define TO_STR(STR) #STR
#define EX_TO_STR(STR) TO_STR(STR)
int main(int argc, char **argv)
{
int i = NB;
char *f_name;
char *f_name_c;
char *cmd1;
char *cmd2;
(void) argc;
if (strchr(argv[0], 95) != NULL)
	i--;
asprintf(&f_name, "Sully_%d", i);
asprintf(&f_name_c, "%s.c", f_name);
asprintf(&cmd1, "clang -Wall -Wextra -Werror -o %s %s", f_name, f_name_c);
asprintf(&cmd2, "./%s", f_name);
char *str = "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c#define NB %d%c#define FILE_NAME(NB) Sully_##NB%c#define FILE(NB) FILE_NAME(NB)%c#define TO_STR(STR) #STR%c#define EX_TO_STR(STR) TO_STR(STR)%cint main(int argc, char **argv)%c{%cint i = NB;%cchar *f_name;%cchar *f_name_c;%cchar *cmd1;%cchar *cmd2;%c(void) argc;%cif (strchr(argv[0], 95) != NULL)%c%ci--;%casprintf(&f_name, %cSully_%%d%c, i);%casprintf(&f_name_c, %c%%s.c%c, f_name);%casprintf(&cmd1, %cclang -Wall -Wextra -Werror -o %%s %%s%c, f_name, f_name_c);%casprintf(&cmd2, %c./%%s%c, f_name);%cchar *str = %c%s%c;%cFILE *f = fopen(f_name_c, %cw+%c);%cfprintf(f, str, 10, 10, 10, i, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 10, 34, 34, 10, 34, 34, 10, 34, 34, 10, 34, 34, 10, 34, str, 34, 10, 34, 34, 10, 10, 10, 10, 10, 9, 10, 10);%cfclose(f);%csystem(cmd1);%cif (i > 0)%c%csystem(cmd2);%c}%c";
FILE *f = fopen(f_name_c, "w+");
fprintf(f, str, 10, 10, 10, i, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 10, 34, 34, 10, 34, 34, 10, 34, 34, 10, 34, 34, 10, 34, str, 34, 10, 34, 34, 10, 10, 10, 10, 10, 9, 10, 10);
fclose(f);
system(cmd1);
if (i > 0)
	system(cmd2);
}
