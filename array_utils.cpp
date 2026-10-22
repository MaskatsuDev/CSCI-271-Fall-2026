#include <iostream>
using namespace std;

void printForward(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printReverse(const int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int countAbove(const int arr[], int size, int limit) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > limit) {
            count++;
        }
    }
    return count;
}

int main() {
    const int SIZE = 6;
    int values[SIZE] = {14, 3, 27, 9, 50, 21};

    cout << "Forward: ";
    printForward(values, SIZE);

    cout << "Reverse: ";
    printReverse(values, SIZE);

    int limit;
    cout << "Count values above: ";
    cin >> limit;

    cout << "Count: " << countAbove(values, SIZE, limit) << endl;

    return 0;
}