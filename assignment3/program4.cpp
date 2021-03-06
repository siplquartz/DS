/*

MS Excel columns has a pattern like A, B, C, … ,Z, AA, AB, AC,…. ,AZ, BA, BB, … ZZ, AAA, AAB ….. etc. In other words, column 1 is named as “A”, column 2 as “B”, column 27 as “AA”.
Given a column number, find its corresponding Excel column name. Following are more examples.
Input          Output
 26             Z
 51             AY
 52             AZ
 80             CB
 676            YZ
 702            ZZ
 705            AAC
*/
 
 
 #include<iostream>
 using namespace std;
 class MSExcel {
     public: MSExcel(){}
 		

 			char* MSExcelColumn(char* arr,int colsNo){
 					int intCounter=0;
 					while(colsNo>0) {
 						
 						int reminder=colsNo%26;
 					//	cout<<reminder;
 						if(reminder==0) {
 							arr[intCounter++]='Z';
 							colsNo=(colsNo/26)-1;
 						} else {
 							arr[intCounter++]=(reminder-1)+'A';
 							colsNo=(colsNo/26);
 						}
 					}
 					arr[intCounter]='\0';
 					return arr;
 			}
             
             
             void reverse(char *str)
                {
                   if(*str)
                   {
                       reverse(str+1);
                       printf("%c", *str);
                   }
                }
 };

 int main(){
 	char arr[50];
 	int colsNo,temp;
 	cout<<"Please enter a column no of MS Excel sheet (In number)";
 	
     if(cin>>colsNo) {
 		MSExcel ms;
 		char* colName = ms.MSExcelColumn(arr,colsNo);
 	    cout<<"MS Excel columns  is:\n";
        ms.reverse(colName);
	  
         
       //printf("\n MS Excel columns  is: %s\n", colName);
  	} else {
 		cout<<"Please enter only numbers";
 	}
     return 0;
 }
