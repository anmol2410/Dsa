#include <iostream>
using namespace std;

int main(){
    int arr[10]  = {1,0,0,1,1,1,1};
    int zeroes = 0;
    int ones = 0 ;
    for(int i = 0;i<8; i++){
        if(arr[i] == 0){
            zeroes++;
        }
        else{
            ones++;
        }
    }
    cout << "Number of ones: " << ones <<endl;
    cout << "Number of zeroes: " << zeroes <<endl;
    return 0;
}