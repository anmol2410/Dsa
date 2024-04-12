#include <iostream>
using namespace std;

int main(){
    // Array creation
    int arr[100] = {1,2,3,4,5,6};
    char ch[10];
    bool b[34];
    short snum[34];
    long lnum[800];

    cout << "Succes "<< endl;

    // Size and address
    // cout << sizeof(b) <<endl;
    // cout << sizeof(lnum) <<endl;
    // cout << &b << endl;

    // Array intilization
    int s[10] = {453,45,6,4657,654,7,4657,6547,456,435};
    int s1[] = {324,324,432,5};
    int ns2[4] = {4,5};
    // int nt[2] = {4,5,6,7,};

    // indexing
    // cout << arr[0] <<endl;
    // cout << arr[2] <<endl;

    // loop 
   

    // input 
    // for(int i=0;i<5;i++){
    //     cin >> arr[i] ;
    // }

    //  // print
    // for(int i=0;i<5;i++){
    //     cout << arr[i] <<endl;
    // }

    //------------ problem------------------
    int man[10];
    for(int i= 0;i<10;i++){
        cin >> man[i] ;
    }
    // double
    for(int i= 0;i<10;i++){
        man[i] = 2*man[i];
    }
    // print
    for(int i= 0;i<10;i++){
        cout << man[i] <<endl ;
    }



    return 0;
}