/* 
For a given n, count the total number of zeros in the decimal representation of the positive integers less than or equal to n. 
For instance, there are 11 zeros in the decimal representations of the numbers less than or equal to 100, 
in the numbers 10, 20, 30, 40, 50, 60, 70, 80, 90, and twice in the number 100. Expect n to be as large as 1010,000.
*/
#include<iostream>
using namespace std;
class countZeros {
	public:
		// Function to count zeros
		int checkZeros(int number){
			int counter=0;
			int temp;
			for (int i = 10; i <=number; i++)
			{
				temp=i;
				while(temp>=10) {
					if(temp%10==0)
						counter++;
					
					temp=temp/10;	
				}

			}
			return counter;
		}
	
};

void main()
{
	countZeros obj;
	int zeroCounts;
	int val;
	cout<<"Enter a value to count zeros";
	if(cin>>val){
		zeroCounts = obj.checkZeros(val);
	    cout<<"Total noumber of  zeros are=";
	    cout<<zeroCounts;
    }else{

    	cout << "Provide integer only";
    }
}

/*
Test Cases
(1) input string  -: "110"
    output -:  "Total noumber of  zeros are=21"
  
(2) input string  -: "s@@chin"
    output -:  "Provide integer only"


(3) input string  -: "125.00"
    output -:  "Total noumber of  zeros are=22"

*/
