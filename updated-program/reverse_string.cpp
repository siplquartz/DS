/*Write code to reverse a C-Style String (C-String means that “abcd” is represented as 
five characters, including the null character )*/
#include <iostream>
using namespace std;

class reverseStr {

	public:
	// function for reverse string 
	string reverse (string str) { 
		string tempStr="";

		for (int i=0; i<str.length( ) ; i++) 
		    tempStr = str[ i ] + tempStr ; 
		
		return tempStr; 
	}
}; 

int main() {
      string inputString;  
      cout<<"Program to reverse a string\n";
  
      cout<<"Please provide string:\n";
      getline (cin,inputString);
      reverseStr obj;
    
      if(inputString.length()<2){
        cout<<"Provided string must content more than two characters\n";
        std::exit(EXIT_FAILURE);
      }


      cout << obj.reverse(inputString);

     return 0;     
 } 
/*
Test Cases
(1) input string  -: "ahgtuggghhj"
    output -:  "jhhgggutgha"
  
(2) input string  -: "s@@chin"
    output -:  "nihc@@s"


(3) input string  -: "s achi n"
    output -:  "n ihca s"


*/
