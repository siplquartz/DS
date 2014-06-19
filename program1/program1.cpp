#include <iostream>

using namespace std;
class checkUniqe{

 private:
  string str;

 public:
   checkUniqe(string charr){
      str = charr;
   }

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
int main()
{
  checkUniqe obj("complexity"); 
  bool result =  obj.check(); 
  if(result)
   cout << "String has unique characters.";
  else
    cout << "String has duplicate characters." ; 
  return 0;
}
