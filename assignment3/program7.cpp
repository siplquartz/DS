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
using namespace std;
class removeDuplicate {
public:
	removeDuplicate(){}
	
	char * removeAdjacent(char* str,int strLength) {
		
		char prev=str[0];
		int repCounter=0;		
		int nextPointer=0;
		
		str[strLength+1]='\0';
		str[strLength]='e';
		
		for (int i = 0; str[i]!='\0'; ++i)	{
			if(str[i]==prev) {
				repCounter++;
			}    
			else if (repCounter>1)	{
				int j;
				int totalShift=0;
				for (j = i; str[j]!='\0'; ++j) 
				{
					str[nextPointer++]=str[j];
					totalShift++;
				}
				nextPointer=nextPointer-totalShift;
				str[(nextPointer+j)-i]='\0';
				i=i-repCounter;
				repCounter=1;
					
			} else {
				nextPointer=i;
			}
			prev=str[i];
		}

		int lenghtAfter=strlen(str);
		str[lenghtAfter-1]='\0';
		lenghtAfter-=1;

		// checking length of string before or after apply algo
		if(lenghtAfter!=strLength && lenghtAfter>1)
			return removeAdjacent(str,lenghtAfter);
		else return str;

		return str;
	}
};

void main(){
	cout<<"Enter a string to remove adjacent duplicates(max lenght 100) : ";
	char str[100];
	if(cin.getline(str,100)) {
		removeDuplicate rad;
		int strLength = strlen(str);
		char *result = rad.removeAdjacent(str,strLength);
		printf("\nString after removed duplicate character: %s\n", result);
	} else {
		cout<<"Wrong inputs provided.";
	}
}
/*
Bese case of this program is o(n)
Worst case of this program is 



*/
