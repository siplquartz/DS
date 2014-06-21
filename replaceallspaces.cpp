#include <iostream>
using namespace std;
class replaceChar{

 private:
  string str;

 public:
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
int main()
{
  // Create object with string parameter
  replaceChar obj("com plexity");
   obj.check();
  return 0;
}
