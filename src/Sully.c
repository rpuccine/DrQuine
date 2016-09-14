#include <stdio.h>
#define NB 5
#define FILE_NAME(x) Sully_##NB
#define TO_STR(str) #str
int main()
{
	int i = 5;
	printf("%s\n", FILE_NAME(NB));
}
