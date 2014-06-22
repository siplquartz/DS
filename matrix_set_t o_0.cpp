//Write an algorithm such that if an element in an MxN matrix is 0, its entire row and 
//column is set to 0 

#include<iostream>
using namespace std;


int main()
{

  int matrix[3][3]={1,2,3,4,0,6,7,8,9};
  int tempmatrix[3][3]= {1,1,1,1,1,1,1,1,1};
   

for (int i=0;i<3;i++) { 
  for (int j=0;j<3;j++) {
    if(matrix[i][j] == 0)
     {
        for (int p=0;p<3;p++)
         {
           tempmatrix[i][p]=0;
           tempmatrix[p][j]=0;
        }
     }
cout<<matrix[i][j];
}
cout<<"\n";
}
cout<<"After changes:\n";
 for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
     if(tempmatrix[i][j] != 0)
     {
       tempmatrix[i][j] = matrix[i][j]; 
     }
  cout<<tempmatrix[i][j];
   }
cout<<"\n";
}


return 0;
}
