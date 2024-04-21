#include <iostream>
using namespace std;

void print(int arr[], int n){
    cout  <<  "Printing array elements : ";
    for(int i = 0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void input(int arr[], int n){
    cout << "Enter array elements : ";
    for(int i = 0; i<n; i++)
    {
        int data;
        cin >> data;
        arr[i] = data;
    }
}
int firstOccurence(int arr[] , int n, int target){
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s<=e){
        // int mid = (s+e)/2; integer overflow 
        int mid = s + (e-s)/2;
        if(target == arr[mid]){
            ans = mid;
            e = mid -1;
        }
        else if(target>arr[mid]){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
    }
    return ans;
}

int lastOccurence(int arr[] , int n, int target){
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s<=e){
        // int mid = (s+e)/2; integer overflow 
        int mid = s + (e-s)/2;
        if(target == arr[mid]){
            ans = mid;
            s = mid  + 1;
        }
        else if(target>arr[mid]){
            s = mid +1;
        }
        else{
            e = mid -1;
        }
    }
    return ans;
}



int main(){
    int n;
    cout << "n :";
    cin >>n;
    int *arr = new int[n];
    input(arr,n);
    print(arr,n);
    cout << " Target found at index :" << firstOccurence(arr,n,30) << endl;
    cout << " Target found at index :" << lastOccurence(arr,n,30) << endl;
    cout << "total Occurence : " << lastOccurence(arr,n,30) - firstOccurence(arr,n,30) +1  <<endl;

    // int *arr = {10, 20, 30, 30, 30, 40, 50, 60, 70};
    

    return 0;

}