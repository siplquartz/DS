//Write a method to replace all spaces in a string with ‘%20’ 

#include <iostream>
using namespace std;

class replaceChar{
   public:
        string str;
      // constructor function to initialize string
        replaceChar(string charr){
           str = charr;
        }
     
     // function for replace space with %20
       void check(){
            string rep;
            for( int i = 0; i< str.length(); i++){
               if(str[i] != ' ')
                  rep += str[i]; 
               else
               rep +=  "%20";
         
           }
         cout << rep;
       }    
} ;

// Main function of the program
int main() {

  string inputString;
  cout<<"Please provide string:\n";
  getline (cin,inputString);

  if(inputString.length()<2){
     cout<<"Provided string must content more than two characters\n";
     std::exit(EXIT_FAILURE);
   }

  // Create object with string parameter
  replaceChar obj(inputString);
   obj.check();
  return 0;
}


/*
Test Cases
(1) input string  -: "s@ch1 n"
    output -:  "s@ch1%20n"
  
(2) input string  -: "s%20 chin"
    output -:  "s%20%20chin"


(3) input string  -: "dsclass"
    output -:  "dsclass"


*/
