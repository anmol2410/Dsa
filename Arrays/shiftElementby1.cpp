#include <iostream>
using namespace std;
void shiftBy1(int arr[],int n){
    
    int k = arr[n-1];
    
    for(int i = n-1;i>0-1;i--){
        arr[i]=arr[i-1];
        
    }
    arr[0] = k;

}

       
void print(int arr[], int m){
    for(int i =0;i<m;i++){
        cout << arr[i] << " " << endl;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    shiftBy1(arr,5);
    print(arr,5);

    return 0;
}