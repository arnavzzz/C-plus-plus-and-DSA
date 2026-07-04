# C++ and DSA Learning Repository

This repository is a personal learning workspace for C++ programming and Data Structures and Algorithms (DSA). It contains topic-wise notes, matching code examples, and reference books used during study.

The goal is to build a strong foundation in C++ first, then gradually move into problem-solving with common DSA topics.

## Repository Structure

```text
C++ and DSA/
├── books c++/
│   └── C++ reference books and PDFs
├── code/
│   └── 001_Introduction_to_cpp/
│       └── first.cpp
├── notes/
│   └── 001_Introduction_to_cpp/
│       └── 01_Writing_a_simple_program.md
├── .gitignore
├── LICENSE
└── README.md
```

## Current Topics

### 001 - Introduction to C++

- Writing a simple C++ program
- Understanding the `main()` function
- Returning control to the operating system

Current example:

```cpp
int main() {
    return 0;
}
```

## How to Run C++ Code

Use any C++ compiler such as `g++`, `clang++`, or an IDE like CLion, Visual Studio, or VS Code.

Example using `g++`:

```bash
g++ code/001_Introduction_to_cpp/first.cpp -o first
./first
```

On Windows PowerShell, after compilation:

```powershell
.\first.exe
```

## Learning Roadmap

### C++ Basics

- Program structure
- Input and output
- Variables and data types
- Operators
- Conditional statements
- Loops
- Functions
- Arrays and strings
- Pointers and references
- Object-oriented programming
- Standard Template Library (STL)

### Data Structures

- Arrays
- Strings
- Linked lists
- Stacks
- Queues
- Hash maps
- Trees
- Binary search trees
- Heaps
- Graphs

### Algorithms

- Searching
- Sorting
- Recursion
- Backtracking
- Two pointers
- Sliding window
- Binary search
- Greedy algorithms
- Dynamic programming
- Graph traversal

## Suggested Folder Convention

For every new topic, keep notes and code in matching numbered folders:

```text
notes/002_Topic_Name/
code/002_Topic_Name/
```

Example:

```text
notes/002_Input_Output/
code/002_Input_Output/
```

This keeps the learning path ordered and easy to revise later.

## Study Method

1. Read or write notes for a topic.
2. Create small C++ examples for the same topic.
3. Compile and run every program.
4. Add comments only where the concept needs explanation.
5. Practice related DSA problems after learning the required C++ concept.

## References

The `books c++/` folder contains C++ learning resources and reference PDFs used for study.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
