
/*Write code to reverse a C-Style String (C-String means that “abcd” is represented as 
five characters, including the null character )*/
#include <iostream>
using namespace std;

class reverseStr {

public:
// function for reverse string 
void reverseString(char *str)
{
   if(*str) {
       reverseString(str+1);
       cout << *str;
   }
}
}; 

int main()
{
   char stringArray[] = "co mplexity";
   reverseStr obj;
   obj.reverseString(stringArray);
   return 0;
}
