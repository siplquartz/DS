/* 
Write a function to return true/false after looking at a string. Examples of strings that pass:

{}, [], (), a(b)c, abc[d], a(b)c{d[e]}

Examples of strings that don't pass:

{], (], a(b]c, abc[d}, a(b)c{d[e}]

*/
#include <iostream>
using namespace std;

class checkExpression{
	public:
	 
	// function for check blance of expression
	bool checkBlanced(string str,int n) {
		  if(n > 1){
			int i = 0;
			char openBracket [] = "({["; 
			char closeBracket [] = ")}]";
			char *check = (char*)malloc(n * sizeof (char));
			int *checkIndex = (int*)malloc(n * sizeof (int));
			int stack = -1;
			   while(str[i] != '\0'){
			   
				   for(int j=0; j < 3; j++){
					
					   if(str[i] == openBracket[j]){			
						 stack++;
						 check[stack] = str[i];
						 checkIndex[stack] = j;
						
					   }
									  
					if(str[i] == closeBracket[j]){
												 
						if(checkIndex[stack] == j){
							check[stack] = '\0';
							checkIndex[stack] = '\0';
							stack--;                    
							 
						}else
							return false;
					}
				}
				i++;
			}
		  
			if(stack == -1)
				return true;
			else
				return false;
		
		}else
			return false;
	}
};

//Main Function
int main(){
	checkExpression obj;
	string expr  = "[{sachin},{gupta}]";

	if(obj.checkBlanced(expr,expr.length()))
		cout << "The given Expression '"<< expr <<"' is balanced.";
	else
		cout << "The given Expression'"<< expr <<"' is not balanced.";
		  
	return 0;
}
