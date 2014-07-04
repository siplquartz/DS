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

int main() {
  
   anagrams obj;
   
    char * stringArray1 = (char *) malloc (sizeof (char)*100); 
    char * stringArray2 = (char *) malloc (sizeof (char)*100); 
    
    cout<<"Please enter first string for checking anagrams\n";
    cin>>stringArray1;
   
   
    cout<<"Please enter  second string for checking anagrams\n";
    cin>>stringArray2;
   

    char  *str1 = obj.sort(stringArray1);
    char  *str2 = obj.sort(stringArray2);
    bool result = obj.checkAnagrams(str1,str2);
   
    if(result)
     cout << "String is anagrams.";
    else
    cout << "String is not anagrams" ; 
   return 0;
}


/*
Test Cases
(1) input string  first -: "s@ch1n" 
    input string  second -: "s@ch1n"
    output -:  "String is anagrams."
  
(2) input string  first -: "dsclass" 
    input string  second -: "classds"
    output -:  "String is anagrams."

(3) input string  first -: "school" 
    input string  second -: "college"
    output -:  "String is not anagrams."


*/
