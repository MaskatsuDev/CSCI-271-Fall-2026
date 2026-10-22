#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int data[SIZE] = {7, 12, 5, 12, 40, 3, 12, 8, 21, 5};

    // Ask the user for a target number
    int target;
    cout << "Enter a number to search for: ";
    cin >> target;
    
    int foundIndex = -1;
    int count = 0;
    
    
 for (int i = 0; i < SIZE; i++) { // This searches for if user target == one from the array
        if (data[i] == target) {
            if (foundIndex == -1) {
                foundIndex = i;   
            }
            count++;
        }
    }

    // Report results
    if (foundIndex != -1) { // This shouts that if are target isnt -1 then we shout we found the index at the given index
        cout << target << " first found at index " << foundIndex << endl;
        cout << target << " appears " << count << " time(s)" << endl;
    } else {
        cout << target << " was not found." << endl;
    }

    return 0;
}