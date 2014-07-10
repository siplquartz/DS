/*Given a string and a character, remove from the string all single occurrences of the character, while retaining all multiple consecutive instances of 
the character. For instance, given string "XabXXcdX", removing singleton Xs leaves the string "abXXcd". */

#include <iostream>
using namespace std;

class removeSingleton{
    public:
    // Functon to get singleton of char
       string removeFromString(string str1,char ch){
        
            int n = str1.length();
             string str2;
              
              for (int i = 0; i<=n; i++) {
                  if(str1[i]==ch) {
                    if(i==0) {
                      if(str1[i]==str1[i+1]){
                        str2 += str1[i];                        
                      }
                    } else {
                      if(str1[i]==str1[i+1] || str1[i]==str1[i-1]){
                        str2 +=str1[i];                        
                      }
                    }
                  } else {                    
                    str2 +=str1[i];                    
                  }
                }
         return str2;
        }
 };

int main() {
   
   string inputString;  
   char ch;
   cout<<"Program to remove all single occurrences of the character from the string  \n";
   cout<<"Please provide string:\n";
   getline (cin,inputString);

   cout<<"Please provide character:\n";
   cin>>ch;

  if(inputString.length()<2){
        cout<<"Provided string must content more than two characters\n";
        std::exit(EXIT_FAILURE);
   }

   removeSingleton r1;
   cout <<"String after remove singleton-  " << r1.removeFromString(inputString,ch);
   return 0;
}

/*
Test Cases
(1) input string  -: "s@@ch@j"
    output -:  "s@@chj"
  
(2) input string  -: "sasasaasasa"
    output -:  "sssaass"


(3) input string  -: "dsclass"
    output -:  "dclass"

*/
