//Write a method to decide if two strings are anagrams or not 

#include <iostream>
using namespace std;
class anagrams{
  
 public:
 
 //  function for sort characters
  char * sort(char *str){
    char temp;
    for(int i = 0; str[i]!='\0'; i++){
        for(int j=i+1; str[j]!='\0';j++) {
         if(str[i]>str[j]){
            temp = str[i];
            str[i] = str[j];
            str[j] = temp; 
         }
     }
    }
    return str;
}
 
 // function for check Anagrams
 bool checkAnagrams(char *str1,char *str2){
  for(int i=0; str1[i]!='\0'; i++  ){
      if(str1[i]!=str2[i] ){
        return false; 
      }   
       
   }
 return true;
 }
};

int main()
{
  
   anagrams obj;
   char stringArray1[] = "abdc";
   char stringArray2[] = "adbc";
   
    char  *str1 = obj.sort(stringArray1);
    char  *str2 = obj.sort(stringArray2);
    bool result = obj.checkAnagrams(str1,str2);
   
    if(result)
     cout << "String is anagrams.";
    else
    cout << "String is not anagrams" ; 
   return 0;
}

