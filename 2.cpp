#include <iostream>
#include <algorithm>

using namespace std;
int main {
	
int MAX_SIZE = 100;

int arr[MAX_SIZE];
int n = 0;

void addElement(int x) {
    if (n >= MAX_SIZE) {
        cout << "Error: array is full" << endl;
    }
    else {
        arr[n++] = x;
        sort(arr, arr + n); // sort the array after adding element
    }
}

void deleteElement(int x) {
    int index = binarySearch(arr, 0, n - 1, x);
    if (index == -1) {
        cout << "Error: element not found" << endl;
    }
    else {
        for (int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }
}

void printArray() {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

}

