#include <stdio.h>

int stringlength(char string[])
{
    int i, length =0;
    for (i=0; string[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int main()
{
	char string[] = "The quick brown fox";

	printf ("\n The length of the string '%s' is %d", 
		string, stringlength(string));
}
