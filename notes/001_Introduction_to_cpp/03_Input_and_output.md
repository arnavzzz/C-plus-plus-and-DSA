# A First Look at Input/ Output

C++ Language does not have any statement to do input and output and instead provides IO. Instead, C++ includes **standard library** called **iostream** which has two names

iostream library has two types: 

- istream (consist of input)
- ostream (consist of output)  

iostream library has four objects (1 object of istream and 3 objects of ostream).

1. **cin:** For input, this object is used.
2. **cout:** For output, this object is used.
3. **cerr:** For warning and error messages, this object is used.
4. **clog:** For getting general information about execution of the program, this object is used.

A sample program for input and output to input of two number and showing its output

```c++
#include <iostream>

int main() {
    int v1 = 0, v2=0;

    std::cout <<"Enter two numbers: "<<std::endl;
    std::cin >> v1 >> v2;

    std::cout<<"The sum of "<<v1<<" and "<<v2<<" is "<< v1 + v2 <<std::endl;
    return 0;
}
```

```
Enter two numbers:
2 4
The sum of 2 and 4 is 6

Process finished with exit code 0
```
