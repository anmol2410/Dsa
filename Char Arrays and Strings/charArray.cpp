#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char ch[10];
    // cin >> ch;
    // cout << ch <<endl;

    // cout <<((int)ch[5]) <<endl; 

    // if we want to accept string with space we uses getline()

    cin.getline(ch,10);

    cout <<"Befor: "<< ch <<endl;

    // Length of the string
    // int len = 0;

    // while(ch[len] != '\0'){
    //     len++;
        
    // }
    int len = strlen(ch);
    // cout << "length = " << len <<endl;

    // Reverse string

    int i = 0;
    int j = len -1;

    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
    cout <<"After: " << ch << endl;

    

    return 0;
}