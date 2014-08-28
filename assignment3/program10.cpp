/*
Q.10 Given two rectangles, find if the given two rectangles overlap or not.
Note that a rectangle can be represented by two coordinates, top left and bottom right. So mainly we are given following four coordinates. l1: Top Left coordinate of first rectangle. r1: Bottom Right coordinate of first rectangle. l2: Top Left coordinate of second rectangle. r2: Bottom Right coordinate of second rectangle.

We need to write a function bool doOverlap(l1, r1, l2, r2) that returns true if the two given rectangles overlap.

*/

#include <iostream>
using namespace std;
struct str_rect{
    int top, bottom, left, right;
}ract1,ract2;
 
void checkOverlap(str_rect r1,str_rect r2){
    if(r1.bottom < r2.top || r2.bottom < r1.top)
     cout<<"Provided rectangles doesn't overlap";
    else if(r1.right < r2.left || r2.right < r1.left)
     cout<<"Provided rectangles doesn't overlap";
    else
    cout<<"Provided rectangles are overlapping";
}
int main(){
   ract1.top=10;ract1.left=10;ract1.right=20;ract1.bottom=20;
   ract2.top=30;ract2.left=30;ract2.right=40;ract2.bottom=40;
   checkOverlap(ract1,ract2);
   return 0;
}
