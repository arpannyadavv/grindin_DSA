#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool pairSum(vector<int>& arr, int target) {
    
    sort(arr.begin(), arr.end());

    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {

        int sum = arr[left] + arr[right];

        if (sum == target) {
            return true;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return false;
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 6};
    int target = 6;

    if (pairSum(arr, target)) {
        cout << "Pair exists";
    }
    else {
        cout << "Pair does not exist";
    }

    return 0;
}