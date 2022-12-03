/*
Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

Return the sorted string. If there are multiple answers, return any of them.

*/
#include<bits/stdc++.h>
using namespace std;
string frequencySort(string s) {
    unordered_map<char,int> m;
    for(auto i : s) {
        m[i]++;
    }
    
    vector<pair<int,char>> v;
    for(auto i : m) {
        v.push_back({i.second,i.first});
    }
    
    sort(v.begin(),v.end());
    
    string ans = "";
    
    for(auto it : v) {
        for(int i=0 ; i<it.first ; i++) {
            ans+=it.second;
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main() {
    string s = "tree";
    cout << frequencySort(s);
}