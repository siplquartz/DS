#include<iostream>
using namespace std;


int main(){
 int size=3;
 int image[3][3];
 int tempImage[3][3];

 int count= 1;
 // Fill the matrix image
 for (int i = 0; i < size; i++)  {

    for (int j = 0; j <size; j++)  {
         image[i][j]=count;
          cout<<image[i][j];
          count=count+1;
          cout<<"  ";
    }
    cout<<"\n";
 }

  cout<<"\n";
 
 // rotating the image 
 for (int i = 0; i < size; i++)
   {
      for (int j = 0; j <size; j++)
      {
       tempImage[i][j] = image[(size-1)-j][i];
       cout<<tempImage[i][j];
      cout<<" ";
  }
 }
 cout<<"\n";
 cout<<"\n Rotated image  \n";
 
 for (int i = 0; i < size; i++) {
    for (int j = 0; j <size; j++)   {
       cout<<tempImage[i][j];
       cout<<" ";
     }
  cout<<"\n";
 }
 return 0;
}
