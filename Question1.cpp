#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    unordered_set<int> seen;
    vector<int> unique_elements;

    for (int num : nums) {
        if (seen.find(num) == seen.end()) {
            seen.insert(num);
            unique_elements.push_back(num);
        }
    }

    for (int i = 0; i < unique_elements.size(); ++i) {
        nums[i] = unique_elements[i];
    }

    return unique_elements.size();
}

int main() {
    vector<int> nums1 = {1, 1, 2};
    int k1 = removeDuplicates(nums1);
    cout << "Output: " << k1;
    for (int i = 0; i < k1; ++i) {
        cout << nums1[i];
        if (i < k1 - 1) {
            cout << ",";
        }
    }
    cout << endl;

    return 0;
}