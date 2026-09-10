#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& arr) {
    
    int left = 0;

    for (int right = 1; right < arr.size(); right++) {
        
        if (arr[right] != arr[left]) {
            left++;
            arr[left] = arr[right];
        }
    }

    return left + 1;
}

int main() {

    vector<int> arr = {1, 1, 2, 2, 3, 3};

    int n = removeDuplicates(arr);

    cout << "Unique elements: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}