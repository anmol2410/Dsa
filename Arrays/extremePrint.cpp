#include <iostream>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int n = 6;
    int i = 0;
    int j = n-1;

    while(i<=j){
        cout << arr[i] <<" " << arr[j] <<endl;
        // cout << " " <<  ;
        i++,j--;
    }
    for(int i = 0; i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}