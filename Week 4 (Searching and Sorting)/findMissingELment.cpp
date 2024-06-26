#include <iostream>
using namespace std;

void findMissingElement(int arr[], int n){
    int s = 0;
    int e = n-1;
    int ans = -1;

    while(s<=e){
        int mid = s + (e-s)/2;
        int diff = arr[mid] - mid;
        if(diff == 1){
            s = mid +1;
        }
        else{
            ans = mid;
            e = mid -1;
        }

    }
    cout << "ans : " << ans + 1 << endl;
}

int main(){
    int arr[] = {1,3,4,5,6,7,8};
    int n = 8;

    findMissingElement(arr,n);

    return 0;
}