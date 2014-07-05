/* Return a list containing only one copy of any duplicates in an input list, with items in the output in the same order as their first
appearance in the input.
Your task is to answer the interview question given above; you must provide at least two different solutions.
*/

#include <iostream>

using namespace std;
class duplicateCharList {
    public:

        // function for make list of all duplicates characters
        char*  duplicateList(string str) {
                int listIndex=0;
                int count=0;
                bool flag=true;
                char * list = (char *) malloc (sizeof (char)*100); 
                
                for (int i = 0; str[i]!='\0'; i++){
                    for (int j = i+1; str[j]!='\0'; j++){
                        if(str[i]==str[j]) {
                            count++;
                            break;
                        }
                    }
                    
                    if(count>0) {
                        for (int k = 0; k<listIndex; k++){
                            if(str[i]==list[k]) {
                                flag=false;
                                break;
                            }       
                        }
                        
                        if(flag) {
                            
                            list[listIndex]= str[i];
                            listIndex++;
                        } 
                        flag= true;
                        count=0;
                    }
                }
                list[listIndex]= '\0';
                //cout << "list-" << list << "\n";
                return list;
            }

};

int main(){
     
      duplicateCharList obj;
      string inputString;  
      cout<<"Program to Return a list containing only one copy of any duplicates in an input list\n";
  
      cout<<"Please provide string:\n";
      getline (cin,inputString);
     
    
      if(inputString.length()<2){
        cout<<"Provided string must content more than two characters\n";
        std::exit(EXIT_FAILURE);
      }
   
      char * result = obj.duplicateList(inputString);
       
      if(*result=='\0')
        cout<<"Duplicate character not found in given string \n";
      else
        cout<<"List of duplicate characters is- " << result;
      
   return 0;
}


/*
Test Cases
(1) input string  -: "s@@ch@j"
    output -:  "@"
  
(2) input string  -: "sachin guptakkk"
    output -:  "ak"


(3) input string  -: "dsclass"
    output -:  "s"

*/
