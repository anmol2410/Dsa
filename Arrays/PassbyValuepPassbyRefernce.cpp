#include <iostream>
using namespace std;

void incrementBy1(int &n ){
    n++;
    cout << "n : " << n << endl;
}

int main(){
    int n ;
    cout << "n : ";
    cin >> n;

    // pass by value
    // cout << "pass by value" << endl;
    // incrementBy1(n);
    // cout << n <<endl;

    // passBy refernece
    cout << "pass by refernece" << endl;
    incrementBy1(n);
    cout << n <<endl;
    return 0;
}