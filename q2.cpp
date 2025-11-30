#include <bits/stdc++.h>
using namespace std;

vector<int> commonElements(vector<int>& A, vector<int>& B) {
    unordered_set<int> s(A.begin(), A.end());
    vector<int> ans;

    for(int x : B)
        if(s.count(x))
            ans.push_back(x);

    return ans;
}

int main() {
    vector<int> A = {1, 2, 3, 4};
    vector<int> B = {3, 4, 5, 6};

    vector<int> ans = commonElements(A, B);
    for(int x : ans) cout << x << " ";
}

