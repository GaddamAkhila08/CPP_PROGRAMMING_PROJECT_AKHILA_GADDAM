# Custom String Class (STL::string Clone)

## Author
**Name:** Akhila Gaddam

## Project Overview
This project is a custom implementation of the C++ Standard Template Library (STL) `string` class. It demonstrates Object-Oriented Programming (OOP) concepts, dynamic memory allocation, and operator overloading by creating a user-defined string class.

## Features
- Default Constructor
- Parameterized Constructor
- Copy Constructor
- Destructor
- Assignment Operator
- Find String Length
- Append Strings
- Compare Strings
- Find Substring
- Extract Substring
- Concatenate Strings using `+`
- Equality Comparison using `==`
- Character Access using `[]`
- Clear String
- Check if String is Empty

## Project Files

- `main.cpp` - Demonstrates the working of the custom string class.
- `MyString.h` - Class declaration.
- `MyString.cpp` - Class implementation.
- `README.md` - Project documentation.

## Technologies Used

- C++
- Object-Oriented Programming (OOP)

## How to Compile

```bash
g++ main.cpp MyString.cpp -o CustomString
```

## How to Run

```bash
./CustomString
```

## Sample Output

```text
s1 = Hello
Length = 5
Append = Hello C++
Find C++ = 6
Substring = C++
Concatenate = Hello C++ World
Compare s1 and s2 = 40
Equality = Not Equal
Character[1] = e
Empty after clear = Yes
```

## Conclusion

This project successfully implements a custom string class with basic functionalities similar to the C++ STL `string` class. It demonstrates important C++ concepts such as classes, dynamic memory management, constructors, destructors, and operator overloading.