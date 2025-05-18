

#include <iostream>
using namespace std;




int main() {


    int arr[5];
    int len = sizeof(arr) / sizeof(int);



    for(int i=0; i<len ; i++) {
        cout << arr[i] << " ";   // idx = 0,1,2,3,4
    }


    cout << endl;
    return 0;
}




