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

int main() {
    palindrome();
    //testing git
    //one more
    //another
    return 0;
}
