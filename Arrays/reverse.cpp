#include <iostream>
using namespace std;

int main(){
    int arr[4] = {1,2,3,4};
    int n = 4;
    int i = 0;
    int j = n-1;

    
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i = 0; i<n;i++){
        cout << arr[i] << " ";
    }
    

    return 0;
}