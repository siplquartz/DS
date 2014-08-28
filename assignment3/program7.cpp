/*Q.7 Given a string, recursively remove adjacent duplicate characters from string. The output string should not have any adjacent duplicates. See following examples.
Input:  azxxzy
Output: ay
First "azxxzy" is reduced to "azzy". The string "azzy" contains duplicates, 
so it is further reduced to "ay".
Input: geeksforgeeg
Output: gksfor
First "geeksforgeeg" is reduced to "gksforgg". The string "gksforgg" contains 
duplicates, so it is further reduced to "gksfor".
Input: caaabbbaacdddd
Output: Empty String
Input: acaaabbbacdddd
Output: acac
*/
#include<iostream>
#include <string.h>
using namespace std;
class removeDuplicate {
public:
	removeDuplicate(){}
	
	char * removeAdjacent(char* str,int strLen) {
		int next=0;
		char prev=str[0];
		int rCounter=0;		
		str[strLen+1]='\0';
		str[strLen]='s';
		
		for (int i = 0; str[i]!='\0'; i++)	{
			if(str[i]==prev) {
				rCounter++;
			}else if (rCounter>1)	{
				int j;
				int shift=0;
				for (j = i; str[j]!='\0'; j++) 
				{
					str[next++]=str[j];
					shift++;
				}
				next=next-shift;
				str[(next+j)-i]='\0';
				i=i-rCounter;
				rCounter=1;
					
			} else {
				next=i;
			}
		  prev=str[i];
		
		}

		int remStrLen=strlen(str);
		str[remStrLen-1]='\0';
		remStrLen-=1;

		if(remStrLen!=strLen && remStrLen>1)
			return removeAdjacent(str,remStrLen);
		else return str;

		return str;
	}
};

int main(){
	cout<<"Provide a string to remove adjacent duplicates : ";
	char str[100];
	if(cin.getline(str,100)) {
		removeDuplicate obj;
		int strLen = strlen(str);
		char *result = obj.removeAdjacent(str,strLen);
		printf("\n String after removed adjacent duplicates: %s\n", result);
	} else {
		cout<<"Wrong inputs provided.";
	}
return 0;	
}
