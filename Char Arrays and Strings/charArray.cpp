#include <iostream>
using namespace std;

int main(){
    char ch[10];
    // cin >> ch;
    // cout << ch <<endl;

    // cout <<((int)ch[5]) <<endl; 

    // if we want to accept string with space we uses getline()

    cin.getline(ch,10);

    cout << ch <<endl;

    // Length of the string
    int count = 0;
    int i = 0;
    while(ch[i] != '\0'){
        count++;
        i++;
    }
    cout << "length = " << count <<endl;

    // Reverse string
    

    return 0;
}