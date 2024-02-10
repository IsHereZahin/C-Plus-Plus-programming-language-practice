
<h1 align="center">Operator types in C++</h1>
<p align="center"><a href="#" target="_blank"><img src="https://raw.githubusercontent.com/DeveloperZahin/C-Plus-Plus-programming-language-practice/main/01.%20Beginner/images/OperatorsinCPP.png" height ="400" alt="Operator types image"></a></p>

# About Operator

In C++, operators are symbols that are used to perform operations on variables and values. They are fundamental to expressing computations and logical evaluations within the language. C++ provides a rich set of operators, which can be categorized into several groups:

**1. Arithmetic Operators:** These operators are used for arithmetic calculations such as addition, subtraction, multiplication, division, and modulus.

    int a = 10, b = 5;
    int sum = a + b;            // Addition
    int difference = a - b;     // Subtraction
    int product = a * b;        // Multiplication
    int quotient = a / b;       // Division
    int remainder = a % b;      // Modulus (remainder of division)

**2. Assignment Operators:** These operators are used to assign values to variables.

    int x = 10;
    x += 5;                     // Equivalent to x = x + 5;


**3. Comparison Operators:** These operators are used to compare values. They return a boolean value (true or false).

    int a = 10, b = 5;
    bool isEqual = (a == b);    // Equal to
    bool isNotEqual = (a != b); // Not equal to
    bool isGreater = (a > b);   // Greater than
    bool isLess = (a < b);      // Less than

**4. Logical Operators:** These operators are used to perform logical operations on boolean values.

    bool x = true, y = false;
    bool result = x && y;       // Logical AND
    bool result2 = x || y;      // Logical OR
    bool result3 = !x;          // Logical NOT

**5. Increment and Decrement Operators:** These operators are used to increase or decrease the value of a variable by 1.

    int i = 5;
    i++; // Increment
    i--; // Decrement

**6. Bitwise Operators:** These operators perform operations on the binary representations of integers.

    int a = 5, b = 3;
    int result = a & b;         // Bitwise AND
    int result2 = a | b;        // Bitwise OR
    int result3 = a ^ b;        // Bitwise XOR

**7. Conditional Operator (Ternary Operator):** This operator is used for decision making and provides a compact way to express if-else statements.

    int a = 10, b = 5;
    int max = (a > b) ? a : b;  // If a is greater than b, max is assigned a; otherwise, b is assigned.



> ***Note: These are some of the basic operators in C++. There are also other types of operators such as pointer operators (*, &), member selection operators (. and ->), comma operators (,), and sizeof operators (sizeof), among others. Each operator serves a specific purpose and enables various operations on data and variables within the C++ language.**

<br>

> *If you want to know more about operator types, you can read this [documentation.](https://www.geeksforgeeks.org/operators-in-cpp/)*
