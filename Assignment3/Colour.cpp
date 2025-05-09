#include <iostream>
using namespace std;

void sortColors(char* colors, int size) {
    int rPtr = 0;
    int wPtr = 0;
    int bPtr = size - 1;

    while (wPtr <= bPtr) {
        if (colors[wPtr] == 'R') {
            char temp = colors[rPtr];
            colors[rPtr] = colors[wPtr];
            colors[wPtr] = temp;
            rPtr++;
            wPtr++;
        } else if (colors[wPtr] == 'W') {
            wPtr++;
        } else {
            char temp = colors[wPtr];
            colors[wPtr] = colors[bPtr];
            colors[bPtr] = temp;
            bPtr--;
        }
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    char* inputArray = new char[n];
    std::cout << "Enter " << n << " characters (R for red, W for white, B for blue): ";
    for (int i = 0; i < n; ++i) {
        std::cin >> inputArray[i];
    }

    int rPtr = 0;
    int wPtr = 0;
    int bPtr = n - 1;

    while (wPtr <= bPtr) {
        if (inputArray[wPtr] == 'R') {
            char temp = inputArray[rPtr];
            inputArray[rPtr] = inputArray[wPtr];
            inputArray[wPtr] = temp;
            rPtr++;
            wPtr++;
        } else if (inputArray[wPtr] == 'W') {
            wPtr++;
        } else {
            char temp = inputArray[wPtr];
            inputArray[wPtr] = inputArray[bPtr];
            inputArray[bPtr] = temp;
            bPtr--;
        }
    }

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << inputArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] inputArray;

    return 0;
}
