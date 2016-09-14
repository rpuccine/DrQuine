#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#define MAIN int main() { int fd;fd = open("Grace_kid.c", O_WRONLY | O_CREAT, S_IRWXU);char str[800];char *tmp = "#include <sys/types.h>%c#include <sys/stat.h>%c#include <fcntl.h>%c#include <unistd.h>%c#include <stdio.h>%c#include <string.h>%c#define MAIN int main() { int fd;fd = open(%cGrace_kid.c%c, O_WRONLY | O_CREAT, S_IRWXU);char str[800];char *tmp = %c%s%c;sprintf(str, tmp, 10, 10, 10, 10, 10, 10, 34, 34, 34, tmp, 34, 10, 10);write(fd, str, strlen(str));}%cMAIN%c";sprintf(str, tmp, 10, 10, 10, 10, 10, 10, 34, 34, 34, tmp, 34, 10, 10);write(fd, str, strlen(str));}
MAIN
