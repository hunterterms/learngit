#include <iostream>
using namespace std;

/*
precompute -> fetch
unordered map
map<int, int> mpp;
    key^(number), value^(frequency)

for(auto it : mpp) {
cout << it.first << "->" << it.second << endl;}
*/
int main() {
    string s;
    cin >> s;
    int hash[26] = {0};
    for (int i=0;i<s.size();i++) {
        hash[s[i]-'a']++;
        //precompute
    }

    int a;
    cin >> a;
    int arr[a];
    while (a--) {
        char c;
        cin >> c;
        cout << hash[c-'a'] << endl;
        //fetch
    }
}