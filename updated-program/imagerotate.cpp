 /* 7.Given an image represented by an NxN matrix, where each pixel in the image is 4 
bytes, write a method to rotate the image by 90 degrees Can you do this in place? */

#include<iostream>
using namespace std;

int main(){
  int size; 
  cout<<"\n Please provide image matrix size in number ";

  if(cin>>size){

       int** image = new int*[size];
       int** tempImage = new int*[size];
       int count= 1;
       
       for (int i = 0; i < size; i++)
         image[i]= new int[size];
   
       for (int i = 0; i < size; i++)
         tempImage[i]= new int[size];
   
       bool inputFlag = true;

       // Fill the matrix image
       

        for (int i = 0; i < size; ++i) {
            
            for (int j = 0; j <size; ++j) {
              
                cout<<"\nEnter the value for image position ["<<i<<"]["<<j<<"] ";
                
                if(cin>>image[i][j]) {
                 } else {
                  inputFlag=false;
                  break;
                 }
            }
            
            if(!inputFlag)
              break;
      
        }

        if(inputFlag){
            cout<<"\n The provided image is\n";
            for (int i = 0; i < size; ++i) {
              for (int j = 0; j < size; ++j)  {
                cout<<image[i][j];
                cout<<"  ";
              }
              cout<<"\n";
            }

          // rotating the image 
          for (int i = 0; i < size; ++i) {
            for (int j = 0; j <size; ++j) {
              tempImage[i][j]=image[(size-1)-j][i];
            }
          }
          
          cout<<"\n ************ Rotated image ********************** \n";
          for (int i =0; i<size; i++) {
            for (int j=0; j<size; j++) {
              cout<<tempImage[i][j];
              cout<<" ";
            }
            cout<<"\n";
          }

        }else 
         cout<<"\nPlease enter only integers  numbers."; 


   }else 
    cout<<"\nPlease enter only integers  numbers."; 


 return 0;
}
