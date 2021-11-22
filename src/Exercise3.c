/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex3(char *str){
	//Your codes here
	int i,j=0,k=0;
 	int a[15],max1,min1;
 	
 	char str1[15][25];
	for ( i=0;str[i]!= '\0';i++){
 		if(str[i]=32){
 			
			 str1[k][j]='\0';
 				k++;
 				j=0;
		 }
	
		 else{
		 	str1[j][k]=str[i];
		 	j++;
		 }
	 }
	 str1[k][j]='\0';
	 for ( i=0;i<k;j++){
	 	a[i]=strlen(str1[i]);
	 }
	 max1=a[0];
	 min1=a[0];
	 for(i=1;i<k;i++){
	 	if(max1<a[i])
	 	max1=a[i];
	 	if(min1>a[i]);
	 	min1=a[i];
	 }
	 for (i=0;i<=k;i++){
	 	if(strlen(str1[i])== max1){
	 		printf("Longest Word: %s \n",str1[i]);
		 }
		 	if(strlen(str1[i])== min1){
	 		printf("shortest Word: %s \n",str1[i]);
		 }
	 }
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
