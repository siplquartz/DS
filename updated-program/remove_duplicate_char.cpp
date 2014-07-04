/*
 4.Design an algorithm and write code to remove the duplicate characters in a string 
without using any additional buffer NOTE: One or two additional variables are fine 
An extra copy of the array is not 
FOLLOW UP
Write the test cases for this method 
*/
#include <iostream>
using namespace std;
class removeDuplicateChar {
   public:
        // function for remove duplicates characters
        char * removeDuplicates(char* str) {
             int index = 1;
             for(int i = 1; str[i]!='\0'; i++) {
                  int j ;
                for(j= 0; j < index; j++) {
                    if(str[i] == str[j]) break;
                }
                
                if(j == index) {
                    str[index] = str[i];
                    index++;
                }
            }
         str[index] = '\0';
         return str;
        }
};
int main(){
     removeDuplicateChar obj;
     char * stringArray = (char *) malloc (sizeof (char)*100); 
     
     cout<<"Please provide string:\n";
     cin>>stringArray;
     char  *str1 = obj.removeDuplicates(stringArray);
     cout << str1;
     return 0;
}

/*
Test Cases
(1) input string  -: "saaaassss"
    output -:  "sa"
  
(2) input string  -: "s@@chinsa"
    output -:  "s@chin"


(3) input string  -: "sachinsachin"
    output -:  "sachin"

*/
