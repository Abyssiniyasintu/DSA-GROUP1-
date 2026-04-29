#include <iostream>
#include <algorithm>
 //for sort()
using namespace std;

bool binarysearch(int dataelement[], int n, int key){
    int top = n - 1;
     //declare these inside the function
    int bottom = 0;
    int  middle;
    bool found = false;
    while (top >= bottom)
    {
    middle = bottom + (top - bottom) / 2;
    if (dataelement[middle] == key){

        found = true;

      break; }
        else if (dataelement[middle] < key) {
         bottom = middle + 1; }
          else {
           top = middle - 1; } 
        }
          
           return found;
}
 
int main(){
    int dataelement[6] = {30, 8, 19, 7, 21, 40};
    
    int key = 12;
    // binarysearch requires sorted data 
    sort(dataelement, dataelement+6);

    if (binarysearch(dataelement, 6, key)){
        cout << "Available" <<endl;
     }
    else{
        cout << " Not available";
    }
   
return 0;
        
    }










































































































































































































































