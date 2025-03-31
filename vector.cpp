#include <iostream>
using namespace std;

void test(int i, int n) {

    if (i > n) {
        return;
    }
    else {
        i++;
        test(i,n);
    }
    cout << "name" << endl;
}

int main() {

    int n;
    cin >> n;
    int i = 1;
    test(i, n);

    string s ="test";
    cout << s.size(s);
    return 0;
}
