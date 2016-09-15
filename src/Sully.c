#include <stdio.h>
#define NB 5
#define FILE_NAME(NB) Sully_##NB
#define FILE(NB) FILE_NAME(NB)
#define TO_STR(STR) #STR
#define EX_TO_STR(STR) TO_STR(STR)
int main()
{
int i = NB;
if (i <= 0)
	return ;
char *f_name;
char *cmd;
asprintf(&f_name, "%s", EX_TO_STR(FILE(NB)));
asprintf(&cmd, "clang -Wall -Wextra -Werror %s.c -o %s ; ./%s", f_name, f_name, f_name);
char *str = "#include <stdio.h>%c#define NB 5%c#define FILE_NAME(NB) Sully_##NB%c#define FILE(NB) FILE_NAME(NB)%c#define TO_STR(STR) #STR%c#define EX_TO_STR(STR) TO_STR(STR)%cint main()%c{%cint i = NB;%cif (i <= 0)%c%creturn ;%cchar *f_name;%cchar *cmd;%casprintf(&f_name, %c%%s%c, EX_TO_STR(FILE(NB)));%casprintf(&cmd, %cclang -Wall -Wextra -Werror %%s.c -o %%s ; ./%%s%c, f_name, f_name, f_name);%c%s%c;%cFILE *f = fopen(f_name, %cw+%c);%cfprintf(f, %c%%s%c, STR);%csystem(cmd);%c}%c";
FILE *f = fopen(f_name, "w+");
fprintf(f, "%s", HEEEEEEEEREEEEEEE);
system(cmd);
}
