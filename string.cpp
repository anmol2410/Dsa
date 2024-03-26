#include <iostream>
using namespace std;

int main(){
    string name;
    // cin >> name;
    getline(cin,name);
    cout <<"Printing :" <<name <<endl;

    // string member function 
    cout << name.size() << " bytes" <<endl;

    cout << name.empty() <<endl;

    name.push_back('r');

    name.pop_back();

    cout << name.length() <<endl;

    cout << name.at(4) <<endl;

    cout << name.append("Anmol") << endl;

    cout << name << endl;

    cout << name.erase();

    cout << name << endl; 


    return 0;

}