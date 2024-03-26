#include <iostream>
#include <string.h>
using namespace std;


void replacewithSpace(char ch[],int n){
    int i = 0;
    while(ch[i]!='\0'){
        if(ch[i]=='@'){
            ch[i] = ' ';
        }
        i++;
    }
}

// palindeome
bool isPalindrome(char ch[], int n){
    int i = 0;
    int j = n-1;
    while(i<=j){
        if(ch[i] == ch[j]){
            i++;
            j--;

        }
        else{
            return false;
        }
    }
    return true;
}

int main(){

    char ch[100];
    cin >> ch;
    int len = strlen(ch);
    
    bool f = isPalindrome(ch,len);
    if(f){
        cout << "valid"<< endl;
    }
    else{
        cout<<"Invalid"<< endl;
    }
    // cin.getline(ch,100);
    // cout << "Before :" <<ch << endl;
    // replacewithSpace(ch,100);
    // cout << "After :" <<ch << endl;



    return 0;
}