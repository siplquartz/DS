/*Given a text txt[0..n-1] and a pattern pat[0..m-1], write a function search(char pat[], char txt[])that 
prints all occurrences of pat[] in txt[]. You may assume that n > m.
*/

#include <iostream>
using namespace std;

class searchPattern{
        
  public:
     // Function to return index of pattern
     void getPatternIndex(string txt, string pat) {
        int i = 0;
        
        while(i < txt.length()){
            //cout<<"\n"<< txt[i];
            int j = 0;
            int index = i;
            while(j < pat.length()){ 
              if(txt[index] == pat[j]){ 
                             
                if(pat.length() == j+1){
                  cout << " \nPattern found at index: "<< i << "\n";
                  break;
                }
                j++;
                index++;
              }else
                break;
            }
            i++;
          }
        }

    };


int main(){
    searchPattern obj;
    
    string text, pat;
    
    cout<<"Please provide a Text : ";
    cin >> text;
    
    cout<<"please provide pattern which you want search in provided text: ";
    cin >> pat; 
    
    
    //check length of given string
    if(text.length() < pat.length()){
        cout << "Pattern string length must be less than text.\n";
        return 0; 
    }
    
    obj.getPatternIndex(text, pat);
              
    return 0;
}
