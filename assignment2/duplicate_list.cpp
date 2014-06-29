#include <iostream>

using namespace std;
class removeDuplicateChar {
    public:

// function for remove duplicates characters
char * removeDuplicates(char* str,int length) {
    
    
    int index = 1;
     for(int i = 1; i < length; i++) {
        int j;
        for(j = 0; j < index; j++) {
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
int main()
{
    removeDuplicateChar obj;
     char stringArray[] = "sachhinn";
     
     if(sizeof(stringArray)>2) {
      char  *str1 = obj.removeDuplicates(stringArray,sizeof(stringArray));
     cout << str1;
   
      }
   return 0;
}
