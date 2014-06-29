/*
If you take all the numbers that contain the digits 1 to 9 exactly once, and you write down the prime factorization of all those numbers, which one has the smallest biggest prime factor?
To illustrate what I mean, the number 879456123 contains the prime factors 3 7 13 and 491; making 491 this numbers biggest prime factor.
The number 213456789 contains 3 7 13 and 197 as factors, making 197 the biggest prime factor. Out of all the numbers I've tried, 213456789 has the smallest biggest prime factor.
Many other number have much bigger biggest prime factors, like 576492813 which contains 3 13 19 and 13649.
*/

#include <iostream>
 using namespace std; 
 class primeFactors{
  
    private:
    	long number;

    public:
       

       calculateFactors(){
         cout << "Enter a number: "; 
	     int n; 
	     cin >> n; 
	     
	     for (int i=2; i <= n; i++) { 
	        
	        while(n % i == 0) { 
	            n = n / i; 
	            cout << i << "\n"; 
	        } 
	     } cout << "\n";  	
	       }	

 };

 int main() 
 { 
     primeFactors pf;
     pf.calculateFactors();   
     return 0; 
}
