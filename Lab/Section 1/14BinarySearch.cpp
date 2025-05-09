#include <iostream>

int main() {
    using namespace std;
    int size, element;
    cout << "Enter the size of the sorted array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the sorted array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched: ";
    cin >> element;
    int low = 0, high = size - 1, mid, index = -1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == element) {
            index = mid;
            break;
        } else if (arr[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (index != -1) {
        cout <<element<<" found at position " << index+1 << endl;
    } else {
        cout << element<<" not found in the array" << endl;
    }
    return 0;
}
