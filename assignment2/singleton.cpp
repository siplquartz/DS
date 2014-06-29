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
         
         for(int i=0;i<=n;i++){
            int j= i+1;
           if(str1[i] == ch && str1[j] == ch ){
              str2 += str1[i];
              str2 +=  str1[j];  
            } else if(str1[i] != ch)
                str2 += str1[i];
      
         }
   
     return str2;
    }
 };

int main() {
   removeSingleton r1;
   char ar[] = "XabXXcdX";
   char ch = 'X';
   cout << r1.removeFromString(ar,ch);
   return 0;
}

