
#include <stdio.h>

int linearSearch(int arr[], int n, int data) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == data) {
            return i;   // element found
        }
    }
    return -1;          // element not found
}

int main() {
    
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int data = 3;

    int result = linearSearch(arr, n, data);

    if (result != -1)
        printf("Element found at index : %d\n", result);
    else
        printf("Element not found");
    return 0;
}
