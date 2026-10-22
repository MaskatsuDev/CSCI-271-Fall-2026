#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int scores[SIZE];

 
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter score " << (i + 1) << ": ";
        cin >> scores[i];
    }


    int sum = 0;
    int highest = scores[0];
    int lowest = scores[0];

    for (int i = 0; i < SIZE; i++) {
        sum += scores[i];
        if (scores[i] > highest) {
            highest = scores[i];
        }
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }

 
    double average = static_cast<double>(sum) / SIZE;


    cout << "Scores:";
    for (int i = 0; i < SIZE; i++) {
        cout << " " << scores[i];
    }
    cout << endl;


    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Highest: " << highest << endl;
    cout << "Lowest: " << lowest << endl;

    return 0;
}