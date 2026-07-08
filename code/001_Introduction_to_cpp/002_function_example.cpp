#include <iostream>
using namespace std;

int addNumbers(int a,int b) {
    return a+b;
}

int main() {
    int sum = addNumbers(4,21);
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}