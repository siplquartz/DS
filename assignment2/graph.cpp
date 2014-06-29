/*
Write a function that takes three points in the x,y plane and determines if they are collinear; be sure to handle vertical lines and horizontal lines properly
*/
#include <iostream>
using namespace std;

class graphs {
    
 private:
  int x1,x2,x3,y1,y2,y3;

 public:

   // constructor function to initialize string  
   graphs(int x11,int x22,int x33,int y11,int y22,int y33){
       x1 = x11;
       x2 = x22;
       x3 = x33;
       y1= y11;
       y2= y22;
       y3 =y33; 
   } 

  // function to check collinear points  
  bool checkCollinear() {
   if(x1==y1 && x2==y2 && x3==y3 )
       return true;
   else if(x1==x2 && x2==x3 && x3==x1 )
       return true;
   else if(y1==y2 && y2==y3 && y3==y1)
       return true;
   else if(x1==0 && x2==0 && x3==0 && y1==0 && y2==0 && y3==0)
       return true;
   else
       return false;
  }

 };


int main() {
   bool result;
   graphs g1(1,1,1,1,1,1);
   result =  g1.checkCollinear();
   
   if(result)
    cout << "points are collinear";
   else
    cout << "points are not collinear";
  
  return 0;
}
