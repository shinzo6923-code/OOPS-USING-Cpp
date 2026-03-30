#include <iostream>
using namespace std;

int main() {
    int arr1[3] = {10, 20, 30};
    int arr2[3] = {40, 50, 60};

    int merged[6];  // size = sum of both arrays

    // Copy arr1 into merged
    for (int i = 0; i < 3; i++) {
        merged[i] = arr1[i];
    }

    // Copy arr2 into merged
    for (int i = 0; i < 3; i++) {
        merged[i + 3] = arr2[i];
    }

    // Print merged array
    for (int i = 0; i < 6; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}