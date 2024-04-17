#include <iostream>
using namespace std;

void findUnique(int arr[], int n){
    int ans = 0;
    for(int i =0 ;i<n;i++){
        ans = arr[i]^ans;
    }
    cout << "Unique elment : "<<ans <<endl;
}
int main(){
    int arr[9] = {3,4,6,7,3,4,6,7,10};
    int n = 9;
    findUnique(arr,n);
    return 0;
}