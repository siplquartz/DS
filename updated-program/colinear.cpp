/*
Q1: Write a function that takes three points in the x,y plane and determines if they are collinear; be sure to handle vertical lines and horizontal lines properly
    //findcolinear.cpp
*/
#include<iostream>
using namespace std;

class colinear {
public:
    // Function to check piints are colinear or not
    bool checkPoint(float** pointArray,int totalPoints){
        float m, slope; int i;
        
        bool coollinearFlag=true;
        // check slop of two points
        for (i = 0; i<totalPoints; i++) {
            
            if((i+1)!=totalPoints) {
                m= (pointArray[i+1][1]-pointArray[i][1])==0 || (pointArray[i+1][0]-pointArray[i][0])==0?0:(pointArray[i+1][1]-pointArray[i][1])/(pointArray[i+1][0]-pointArray[i][0]);
            } else {
                m= (pointArray[0][1]-pointArray[i][1])==0||(pointArray[0][0]-pointArray[i][0])==0?0:(pointArray[0][1]-pointArray[i][1])/(pointArray[0][0]-pointArray[i][0]);
            }
            
            if(i!=0) {
                if(slope!=m) {
                   coollinearFlag=false;
                   break;
                }
            }

            slope=m;
        }
        return coollinearFlag;
    }
};

void main(){
    int totalPoints;
    float** pointArray;
    
    cout<<"Please provede total no of points (In integer)?\n";
    
    if(cin>>totalPoints) {
       
        pointArray = new float*[totalPoints];
       
        for(int i = 0; i < totalPoints; ++i)
            pointArray[i] = new float[2];
        int i;
       
        for (i = 0; i < totalPoints; ++i) {
            float x,y;

            cout<<"\nEnter a value for position X"<<(i+1)<<" ";
            
            if(cin>>x) {
                pointArray[i][0] = x;
            } else {    
                break;
            }
            
            cout<<"\nEnter a value for position y"<<(i+1)<<" ";
            if(cin>>y) {
                pointArray[i][1] = y;
            } else {
                break;
            }
        }

        if(i!=totalPoints) {
                cout<<"\n Only Integer number is allowd";
                exit(0);
        } else {
            

       colinear fc;
            
            if(fc.checkPoint(pointArray,totalPoints))
                cout<<"\n Points are coolinear";
            else
                cout<<"\n Points are not coolinear";
                   }
    } else {
        cout<<"\n Only Integer number is allowd ";
        exit(0);
    }


}
