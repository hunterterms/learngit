#include <iostream>
using namespace std;

void sort(int arr[], int n) {
    for (int i=n-1;i>=0;i--) {
        for (int j=0;j<i;j++) {
            if (arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

}


int main() {
    int n = 6;
    int arr[n] = {13, 46, 24, 52, 20, 9};
    sort(arr, n);
    for (int i=0;i<6;i++) {
        cout << arr[i] << endl;
    }
    return 0;
}