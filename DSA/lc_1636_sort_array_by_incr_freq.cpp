/*
Given an array of integers nums, sort the array in increasing order based on the frequency of the values.
If multiple values have the same frequency, sort them in decreasing order.

Return the sorted array.

Input: nums = [1,1,2,2,2,3]
Output: [3,1,1,2,2,2]

Input: nums = [2,3,1,3,2]
Output: [1,3,3,2,2]

*/
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a , pair<int,int>b) {
    if(a.first < b.first) return true;
    if(a.first == b.first) return a.second > b.second;
    return false;
}

vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i : nums) {
            m[i]++;
        }

        vector<pair<int,int>> v; // first -> freq , second -> number

        for(auto i : m) {
            v.push_back({i.second,i.first});
        }

        sort(v.begin(),v.end(),cmp);

        vector<int> ans;
        for(auto i : v) {
            for(int e=0 ; e<i.first ; e++) {
                ans.push_back(i.second);
            }
        }

        return ans;
    }

int main() {

    vector<int> nums = {2,3,1,3,2};
    vector<int> ans = frequencySort(nums);
    for(auto i : ans) cout << i << " ";
    return 0;
}