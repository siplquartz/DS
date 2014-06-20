
#include <iostream>
using namespace std;

class reverseStr {

public:

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
