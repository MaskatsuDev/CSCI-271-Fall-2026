#include <iostream>
using namespace std;

int main(){
    
    int Temperature;
    
    cout << "Whats the temperature outside?";
    cin >> Temperature;
    if (Temperature <= 32 ){
        cout << "The temperature outside is Freezing";
    } else if (Temperature >= 32 and Temperature <= 59){
        cout << "Its cold outside";
    } else if (Temperature >= 60 and Temperature <= 75){
        cout << "The Temperature outside is mild";
    } else if (Temperature >= 76){
        cout << "Its hot outside";
    }
}