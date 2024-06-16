#include <bits/stdc++.h>

using namespace std;

vector<int> findUnionBruteForce(int a[], int b[], int n, int m) {
    vector<int> Union;
    map<int, int> freq;
    for(int i=0;i<n;i++) {
        freq[a[i]]++;
    }
    for(int i=0;i<m;i++) {
        freq[b[i]]++;
    }
    for(auto &it: freq)
    Union.push_back(it.first);
    return Union;
}

vector<int> findUnionBetter(int a[], int b[], int n, int m) {
    vector<int> Union;
    set<int> st; 
    for(int i = 0; i < n; i++) {
        st.insert(a[i]);
    }
        for(int i = 0; i < m; i++) {
        st.insert(b[i]);
    }
    for(auto &it: st)
    Union.push_back(it);
    return Union;
}

vector<int> findUnionOptimal(int a[], int b[], int n, int m) {
    
}


int main() {
  int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12};
  vector < int > Union = findUnionBruteForce(arr1, arr2, n, m);
  vector < int > Union = findUnionBetter(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is " << endl;
  for (auto & val: Union)
    cout << val << " ";
  return 0;
}

