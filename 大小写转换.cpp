#include <stdio.h>

char toUpper(char ch)
{
	if(ch >= 'a' && ch <= 'z')
		return ch - 32;
	return ch;
}

char toLower(char ch)
{
	if(ch >= 'A' && ch <= 'Z')
		return ch + 32;
	return ch;
}

int main(void)
{
	printf("minus = %d\n",'a' - 'A');
	char ch1 = 's';
	char ch2 = toUpper(ch1);
	printf("ch1 = %c,ch2 = %c\n",ch1,ch2);
}
