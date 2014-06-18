#include <iostream>
#include <time.h>

using namespace std;

int myvalue(int n) {
    int i, j, k = 0;
    for (i  = n/2; i <= n; i++)
        for (j = 2; j <= n; j = j * 2)
            k = k + n/2;
    return k;
    //cout <<  "inner k = "<< k;
 }

int main()
{
    
    clock_t start, end;
    
    start = clock();
    
    //perform calculations for which performance needs to be checked
    cout <<" k = ";
    cout <<  myvalue(10000000);
    cout <<" \n ";
        
    end = clock();
    
    cout << "Time required for execution: "
    << (double)(end-start)/CLOCKS_PER_SEC
    << " seconds." << "\n\n";  
    
}
