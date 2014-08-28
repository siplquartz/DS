/*
Q.2 Given two sequences, print the longest subsequence present in both of them.
Examples: LCS for input Sequences “ABCDGH” and “AEDFHR” is “ADH” of length 3. LCS for input Sequences “AGGTAB” and “GXTXAYB” is “GTAB” of length 4.
Here LCS stands for  Longest Common Subsequence
*/


#include<iostream>
#include <string.h>

using namespace std;
class longestSubsequence {
public:
	

	char* findLCC(char *string1,int string1Lenght,char *string2,int string2Lenght){
		int maxLenStr = string1Lenght;
		char temp[100];
		int tempIncrement=0;
		if(string2Lenght>string1Lenght)
			maxLenStr = string2Lenght;
		

		for (int i = 0; i < maxLenStr; i++)	{
			char string1Value = '|';
			char string2Value = '|';
			if(string1Lenght>i)
				string1Value = string1[i];

			if(string2Lenght>i)
				string2Value = string2[i];
			int string1FindIndex = 0;
			int string2FindIndex = 0;
			
			
			for (int j = 0; string1[j]!='\0'; j++){
				
				if(string2Value==string1[j]) 	
					break;
				
				string1FindIndex++;
			} 
			
			for (int k = 0; string2[k]!='\0'; k++){
				
				if(string1Value==string2[k]) 
					break;
				
				string2FindIndex++;
			} 
			
			if(string1FindIndex==string1Lenght && string2FindIndex==string2Lenght) {
				continue;
			} else {
				if(string1FindIndex==string1Lenght) {
					temp[tempIncrement]=string1Value;
					
					tempIncrement++;
				} else if(string2FindIndex==string2Lenght) {
					temp[tempIncrement]=string2Value;
					tempIncrement++;
				} else {
					if(string1FindIndex<=string2FindIndex) {
						temp[tempIncrement]=string2Value;
						tempIncrement++;
					} else {
						temp[tempIncrement]=string1Value;
						tempIncrement++;
					}
				}

			} 
		}
		temp[tempIncrement]='\0';
		return removeDuplicate(temp);
	}

	public: char* removeDuplicate(char *arr) {
		for (int i = 0; arr[i]!= '\0'; ++i)
		{
			if(arr[i]==32)
				continue;
			for (int j = i+1;  arr[j]!= '\0'; ++j)
			{
				if(i==j)
					continue;
				if(arr[i]==arr[j]) { // array shifting
					for(int k=j;arr[k]!= '\0';k++){
						arr[k]=arr[k+1];
					}
					i--;
				}
			}
		}
		return arr;
	}
};

int main(){
	cout<<"Provide first string";
	char string1[100];
	if(cin.getline(string1,100)) {
		cout<<"Provide second string";
		char string2[100];
		if(cin.getline(string2,100)) {
			longestSubsequence ls;
			char *sequence= ls.findLCC(string1,strlen(string1),string2,strlen(string2));
			printf("\nResults are:: %s\n", sequence);
		   cout << sequence;
		}
	}
	return 0;
}
