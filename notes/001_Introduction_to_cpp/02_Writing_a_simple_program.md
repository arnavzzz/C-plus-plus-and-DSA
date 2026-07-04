# Writing a simple C++ program

Every C++ program have one or more functions and one of them is main and Operating system call it to run the program

Here is a simple of C++ which do nothing but only return a value to the operating system

```c++
int main() {
    return 0;
}
```

A function consist of return type, function name, a parameter list (which can be empty) and a function body.

Below a code in which you can see the example of the code

```c++
#include <iostream>
using namespace std;

int addNumbers(int a,int b) {
    return a+b;
}

int main() {
    int sum = addNumbers(5,10);
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}
```