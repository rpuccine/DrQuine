#include <stdio.h>
/* coucou */
void func() {}
int main()
{
/* au revoir */
char *str = "#include <stdio.h>%c/* coucou */%cvoid func() {}%cint main()%c{%c/* au revoir */%cchar *str = %c%s%c;%cprintf(str, 10, 10, 10, 10, 10, 10, 34, str, 34, 10, 10, 10);%c}%c";
printf(str, 10, 10, 10, 10, 10, 10, 34, str, 34, 10, 10, 10);
}
