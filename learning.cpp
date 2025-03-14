#include <cmath>
#include <iostream>
using namespace std;

int palindrome(){
    int num = 121;
    int reverse, rem;

    while (num!=0) {
        rem=num%10;
        reverse = reverse*10 + rem;
        num = num/10;
    }

    if (reverse==num){
        cout << "true";

    }
    else{
        cout <<"false";
    }
    return 0;

}


//void Vector() {
  //  vector<int> v;
    //v.push_back (1);
    //v.emplace_back (1,2);
//}

int main() {
    palindrome();
    //testing git

    return 0;
}
