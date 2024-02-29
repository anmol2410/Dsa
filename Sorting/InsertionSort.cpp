#include <iostream>
#include <vector>
using namespace std;


// print function
int print(vector<int> &v, int n){
    for(int i =0;i<n;i++){
        cout << v[i] << " ";
    }
}
// Insertion Sort
int selectionSort(vector<int> &v,int n){
    
    for(int i =0;i<n-1;i++){
        int minIndex = i;
        for(int j =i+1; j<n;j++){
            if(v[j]<v[minIndex]){
                minIndex = j;
            }
        }
        swap(v[i],v[minIndex]);
    }
}

int main(){
    vector <int> vec;
    vec.push_back(34);
    vec.push_back(88);
    vec.push_back(1);
    vec.push_back(25);
    vec.push_back(45);
    int n = vec.size();

    print(vec,n);
    selectionSort(vec,n);
    cout <<endl;
    print(vec,n);

    return 0;
}