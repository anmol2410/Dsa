#include <iostream>
#include <limits.h>
using namespace std;

void min(int arr[] , int n){
    int min = INT_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Minimum : " <<min <<endl;
}

int main(){
    int arr[10] = {2,-3,4,5,5,-600,7,80,5,-10};
    int n = 10;
    min(arr,n);

    return 0;
}