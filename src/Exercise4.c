/*
4. Receive a string, remove all blank spaces at begin and
end of the string and leave only one blank space between words.
Ex:
 ________________________________________________
| Input: "  this  is an   unformatted  string "  |
| Output: this is an unformatted string          |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex4(char *str){
	//Your codes here
	int j=0,i=0;
	char a[100],b[100];
		while (a[i] !='\0')
	{
		if ( !(a[i]==' '&& a[i+1] ==' '))
			{
			b[j]=a[i];
			j++;
		}
		i++;
	}
	b[j]='\0';
	printf("Output: %s ",b);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex4(testcase);

	return 0;
}