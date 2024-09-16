#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    if (arr_size < 2) {
        cout << "Array is too small to find the second minimum element" << endl;
        return 0;
    }

    int first_min = INT_MAX, second_min = INT_MAX;


    for (int i = 0; i < arr_size; i++) {
        if (arr[i] < first_min) {
            second_min = first_min;  
            first_min = arr[i];     
        }
        else if (arr[i] < second_min && arr[i] != first_min) {
            second_min = arr[i];     
        }
    }

    if (second_min == INT_MAX) {
        cout << "There is no second minimum element" << endl;
    } else {
        cout << "The second minimum element is " << second_min << endl;
    }

    return 0;
}
