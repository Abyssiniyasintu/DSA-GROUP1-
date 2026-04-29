#include <iostream>
using namespace std;


bool sequentialsearch(int dataelement[], int n, int key){
    bool found = false;
    for (int i=0; i<n; i++){
        if(dataelement[i] == key){
            found = true;
            break;
        }
    }
      return found;
}

int main(){
    int dataelement[6] = {30, 8, 19, 7, 21, 40};
    int key = 8;
    bool found = sequentialsearch(dataelement,6,key);
    if (found){
        cout << "the searched value is available";
    }
    else{
        cout << "the searched value is not available";
    }

    return 0; 
}