#include <iostream>
#include <vector>
using namespace std;

// print function
int print(vector<int> &v, int n){
    for(int i =0;i<n;i++){
        cout << v[i] << " ";
    }
}
// Bubble sort
int bubbleSort(vector <int> &vec, int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;++j){
            if(vec[j]>vec[j+1]){
                swap(vec[j],vec[j+1]);
            }
        }
    }
}

int main(){
    // vector <int> v = {23,324,34,5,2};

    cout << "Hello"<<endl;
    vector <int> vec;
    
    vec.push_back(34);
    vec.push_back(88);
    vec.push_back(1);
    vec.push_back(25);
    vec.push_back(45);
    int n = vec.size();
    cout << "Size : " << n <<endl;
    print(vec,n);
    bubbleSort(vec,n);
    cout <<endl;
    print(vec,n);








    return 0;
}