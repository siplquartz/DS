// program 1.Implement an algorithm to determine if a string has all unique characters What if you can not use additional data structures?
#include <iostream>
using namespace std;
class checkUnique{

 private:
  string str;

 public:
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
int main()
{
  // Create object with string parameter
  checkUnique obj("complexity"); 
  bool result =  obj.check(); 
  if(result)
   cout << "String has unique characters.";
  else
    cout << "String has duplicate characters." ; 
  return 0;
}
