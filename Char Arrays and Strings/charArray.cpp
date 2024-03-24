#include <iostream>
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
    int count = 0;

    while(ch[count] != '\0'){
        count++;
        
    }
    // cout << "length = " << count <<endl;

    // Reverse string

    int i = 0;
    int j = count -1;

    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
    cout <<"After: " << ch << endl;

    

    return 0;
}