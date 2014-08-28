/*Q.9 Given a string, check if it is a rotation of a palindrome. For example your function should return true for “aab” as it is a rotation of “aba”.
Examples:
Input:  str = "aaaad"
Output: 1  
 "aaaad" is a rotation of a palindrome "aadaa"

Input:  str = "abcd"
Output: 0
 "abcd" is not a rotation of any palindrome.

*/

#include<iostream>
#include <string.h>
using namespace std;
class StringPalindrome {
	public:
		// Function to check string is palindrome or not
		bool checkPalindrome(char *str,int strLen){
			for (int i = 0; i<(strLen/2); i++) {
				if(str[i]!=str[(strLen-1)-i])
					return false;
			}
			return true;
		}
	
	    // function to rotation of a string 
		bool rotateString(char *str,int strLen){
			if(checkPalindrome(str,strLen)) {
				return true;
			}

			for (int i = 0; i<(strLen/2); i++) {
				char prevStr=str[0];
				for (int i = 0; i < strLen-1; i++) {
					str[i]=str[i+1];
				}
				str[strLen-1]=prevStr;
				if (checkPalindrome(str,strLen))
				{
					return true;
				}
			}
			return false;
		}
};

int main(){
	char str[200];
	cout<<"Provide string to check palindrome ";
	if(cin.getline(str,100)){
		StringPalindrome obj;
		if(obj.rotateString(str,strlen(str)))
			cout<<"\n provided string is palindrome";
		else 
			cout<<"\n provided string is not palindrome";
	}
 return 0;	
}
