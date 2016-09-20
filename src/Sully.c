#include <stdio.h>
#include <stdlib.h>
#define NB 5
#define FILE_NAME(NB) Sully_##NB
#define FILE(NB) FILE_NAME(NB)
#define TO_STR(STR) #STR
#define EX_TO_STR(STR) TO_STR(STR)
int main()
{
int i = NB;
if (i <= 0)
	return (0);
char *f_name;
char *f_name_c;
char *cmd;
asprintf(&f_name, "%s", EX_TO_STR(FILE(NB)));
asprintf(&f_name_c, "%s.c", f_name);
asprintf(&cmd, "clang -Wall -Wextra -Werror %s.c -o %s ; ./%s", f_name, f_name, f_name);
printf("**cmd = %s\n**f_name = %s\n**f_name_c = %s\n", cmd, f_name, f_name_c);
char *str = "#include <stdio.h>%c#include <stdlib.h>%c#define NB %d%c#define FILE_NAME(NB) Sully_##NB%c#define FILE(NB) FILE_NAME(NB)%c#define TO_STR(STR) #STR%c#define EX_TO_STR(STR) TO_STR(STR)%cint main()%c{%cint i = NB;%cif (i <= 0)%c%creturn (0);%cchar *f_name;%cchar *f_name_c;%cchar *cmd;%casprintf(&f_name, %c%%s%c, EX_TO_STR(FILE(NB)));%casprintf(&f_name_c, %c%%s.c%c, f_name);%casprintf(&cmd, %cclang -Wall -Wextra -Werror %%s.c -o %%s ; ./%%s%c, f_name, f_name, f_name);%cchar *str = %c%s%c;%cFILE *f = fopen(f_name_c, %cw+%c);%cfprintf(f, str, 10, 10, --i, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 34, 34, 10, 34, 34, 10, 34, 34, 10, 34, str, 34, 10, 34, 34, 10, 10, 10, 10);%csystem(cmd);%c}%c";
FILE *f = fopen(f_name_c, "w+");
fprintf(f, str, 10, 10, --i, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 34, 34, 10, 34, 34, 10, 34, 34, 10, 34, str, 34, 10, 34, 34, 10, 10, 10, 10);
system(cmd);
}
