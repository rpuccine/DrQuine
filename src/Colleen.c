#include <stdio.h>
/* coucou */
int main()
{
char *str = "#include <stdio.h>%c/* coucou */%cint main()%c{%cchar *str = %c%s%c;%cprintf(str, 10, 10, 10, 10, 34, str, 34, 10, 10, 10);%c}%c";
printf(str, 10, 10, 10, 10, 34, str, 34, 10, 10, 10);
}
