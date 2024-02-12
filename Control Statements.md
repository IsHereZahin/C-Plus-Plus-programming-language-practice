## 1. Conditional Statements:
Conditional statements in C++ allow you to execute certain code blocks based on whether a given condition is true or false. The most common conditional statement in C++ is the if statement.

### if Statement:
The if statement evaluates a condition and executes a block of code if the condition is true.


>if (condition) {<br/>
        // code to execute if condition is true
    } else {
<br/>        // code to execute if condition is false
    }

***Explanation:*** The condition is any expression that evaluates to either true or false.
If the condition is true, the code block following the if statement is executed.
If the condition is false, the code block following the else statement (if present) is executed.

    Example:

    #include <iostream>
    using namespace std;

    int main() {
        int x = 10;

        if (x > 5) {
            cout << "x is greater than 5" << endl;
        } else {
            cout << "x is not greater than 5" << endl;
        }

        return 0;
    }

## 2. Loop Statements:
Loop statements in C++ allow you to execute a block of code repeatedly as long as a specified condition is true. There are three main loop statements in C++: for, while, and do-while.

### for Loop:
The for loop is typically used when you know exactly how many times you want to execute the loop.


>for (initialization; condition; update) { <br/>
    // code to execute
<br/>}

***Explanation:*** The initialization is executed before the loop starts and typically initializes the loop control variable.
The condition is evaluated before each iteration. If it's true, the loop continues; otherwise, the loop terminates.
The update is executed at the end of each iteration and typically updates the loop control variable.

    Example:

    #include <iostream>
    using namespace std;

    int main() {
        for (int i = 0; i < 5; ++i) {
            cout << i << " ";
        }
        cout << endl;

        return 0;
    }

### while Loop:
The while loop is used when you want to execute a block of code as long as a condition is true.

>while (condition) { <br/>
    // code to execute
<br/>}

***Explanation:*** The condition is evaluated before each iteration. If it's true, the loop continues; otherwise, the loop terminates.

    Example:

    #include <iostream>
    using namespace std;

    int main() {
        int i = 0;
        while (i < 5) {
            cout << i << " ";
            ++i;
        }
        cout << endl;

        return 0;
    }

### do-while Loop:
The do-while loop is similar to the while loop, but the condition is checked after the execution of the loop body. This ensures that the loop body is executed at least once.


>do { <br/>
    // code to execute
<br/>} while (condition);

***Explanation:*** The loop body is executed once before the condition is evaluated.
If the condition is true, the loop continues; otherwise, the loop terminates.

    Example:

    #include <iostream>
    using namespace std;

    int main() {
        int i = 0;
        do {
            cout << i << " ";
            ++i;
        } while (i < 5);
        cout << endl;

        return 0;
    }

## 3. Jump Statements:
Jump statements in C++ allow you to transfer control unconditionally within your program. Examples include break, continue, goto, and return.

### break Statement:
The break statement is used to exit a loop or switch statement.

    for (int i = 0; i < 5; ++i) {
        if (i == 3) {
            break;
        }
        cout << i << " ";
    }

***Explanation:*** When encountered, the break statement immediately exits the loop in which it is contained.
continue Statement:
The continue statement is used to skip the rest of the loop body and move to the next iteration.

    for (int i = 0; i < 5; ++i) {
        if (i == 2) {
            continue;
        }
        cout << i << " ";
    }

***Explanation:*** When encountered, the continue statement skips the remaining code in the loop body for the current iteration and jumps to the next iteration.
return Statement:
The return statement is used to exit a function and return a value.


    int myFunction() {
        return 42;
    }

***Explanation:*** The return statement immediately terminates the execution of the current function and returns the specified value to the caller.
These control statements provide essential mechanisms for controlling the flow of execution in C++ programs, enabling you to make decisions, iterate over data, and manage program flow effectively.
