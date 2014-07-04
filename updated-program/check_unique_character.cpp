// program 1.Implement an algorithm to determine if a string has all unique characters What if you can not use additional data structures?
#include <iostream>
using namespace std;
class checkUnique{

 	public:
  		string str;

  		// constructor function to initialize string  
   		checkUnique(string charr){
      		str = charr;
   		}
 
 		// function for check uniqe characters
   		bool  check(){
     		for( int i = 0; i< str.length(); i++){
         		for(int j=i+1; j<str.length(); j++){
              		if(str[i] == str[j] )
               		return false;
             	}
          	}
     		return true;
     	}
    
} ;

// Main function of the program
int main() {
  
  string inputString;
  cout<<"Program to determine if a string has all unique characters\n";
  
  cout<<"Please provide string:\n";
  getline (cin,inputString);

  if(inputString.length()<2){
     cout<<"Provided string must content more than two characters\n";
     std::exit(EXIT_FAILURE);
   }
  
  // Create object with string parameter
  checkUnique obj(inputString); 
  bool result =  obj.check(); 
  
  if(result)
   cout << "String has unique characters.";
  else
    cout << "String has duplicate characters." ; 
  return 0;
}


/*
Test Cases
(1) input string  -: "s@ch1n"
    output -:  "String has unique characters."
  
(2) input string  -: "s@@chin"
    output -:  "String has duplicate characters."


(3) input string  -: "s c hina"
    output -:  "String has duplicate characters."


*/
