#include <iostream>
#include <string>
using namespace std;

int main(){

    string NameRequest;
    int Age;

    cout << "Hello, what is your name? ";
    cin >> NameRequest;
    
    cout << "How old are you? ";
    cin >> Age;
    
    cout << "Hello, I am " << NameRequest << "! " << "I am " << Age << " years old" << endl;
    
    return 0;
}