#include <stdio.h>
int main(void) 
{
	int c;
	printf("Enter the character");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		printf("\n c is a vowel");
	}
	else
	{
		printf("\n c is a consonant");
	}
	return 0;
}
