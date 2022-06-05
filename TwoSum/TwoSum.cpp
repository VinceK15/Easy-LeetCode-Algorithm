// TwoSum.cpp : This file contains the 'main' function. Program execution begins and ends there.

/* Given an array of integers numsand an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.



Example 1:

Input: nums = [2, 7, 11, 15], target = 9
Output : [0, 1]
Explanation : Because nums[0] + nums[1] == 9, we return[0, 1].
Example 2 :

    Input : nums = [3, 2, 4], target = 6
    Output : [1, 2]
    Example 3 :

    Input : nums = [3, 3], target = 6
    Output : [0, 1]


    Constraints :

    2 <= nums.length <= 104
    - 109 <= nums[i] <= 109
    - 109 <= target <= 109
    Only one valid answer exists.
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> numbertoFind;
        int size = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            for (int l = i + 1; l < nums.size(); l++) {
                if (nums[i] + nums[l] == target)
                {
                    numbertoFind.push_back(i);
                    numbertoFind.push_back(l);
                    for (int z = 0; z < numbertoFind.size(); z++)
                    {
                        cout << numbertoFind[z] << ", ";
                    }
                }
            }
        }
        return numbertoFind;
    }
};

int main()
{
    int target1 = 9;
    int target2 = 6;
    int target3 = 6;
    vector <int> nums1 = { 2, 7, 11, 15 };
    vector <int> nums2 = { 3, 2, 4 };
    vector <int> nums3 = { 3, 3 };
    Solution myObject;
    cout << "[";
    myObject.twoSum(nums1, target1);
    cout << "] ";
    cout << "[";
    myObject.twoSum(nums2, target2);
    cout << "] ";
    cout << "[";
    myObject.twoSum(nums3, target3);
    cout << "] ";
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
