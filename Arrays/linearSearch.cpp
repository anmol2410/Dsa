#include <iostream>
using namespace std;

bool linearSearch(int arr[] ,int n, int k){
    for(int i= 0;i<n;i++){
        if(arr[i] ==k){
            return 1;
        }
        
    }
    return 0;
}

int main(){
    int arr[100] = {20,30,40,50,60};
    int size = 5;
    int element ;
    cout << "enter element you want to search: ";
    cin >> element;
    if(linearSearch(arr,size,element))
    cout << "element found"<<endl;
    else
    cout << "Not found" <<endl;

    
    return 0;
}