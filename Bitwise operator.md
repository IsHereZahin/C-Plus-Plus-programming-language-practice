
<h1 align="center">Bitwise operator in C++</h1>
<p align="center"><a href="#" target="_blank"><img src="https://raw.githubusercontent.com/DeveloperZahin/C-Plus-Plus-programming-language-practice/main/01.%20Beginner/images/Bitwise operator .PNG" height ="400" alt="Operator types image"></a></p>

# Bitwise Operator

Bitwise operators in programming languages like C++ are used to perform operations at the bit level. These operators manipulate individual bits of integers or other data types directly. Here's an overview of the common bitwise operators:

**1. Bitwise AND (&):**
* This operator performs a logical AND operation on each pair of corresponding bits of two integers. It returns 1 if both bits are 1; otherwise, it returns 0.
* Analogous to + (addition) because it combines bits, just like addition combines numbers.

**2. Bitwise OR (|):**
* This operator performs a logical OR operation on each pair of corresponding bits of two integers. It returns 1 if at least one of the bits is 1; otherwise, it returns 0.
* Analogous to addition (+) because it combines bits, just like addition combines numbers. However, it does not consider carry-over effects like addition does.

**3. Bitwise XOR (^):**
* This operator performs a logical XOR (exclusive OR) operation on each pair of corresponding bits of two integers. It returns 1 if only one of the bits is 1; otherwise, it returns 0.
* It's not directly analogous to any arithmetic operator, but you could loosely relate it to addition (+) because it combines bits but with the constraint that if both bits are 1, it becomes 0.

**4. Bitwise NOT (~):** 
* This operator performs a logical NOT operation, i.e., it flips each bit of the operand, turning 1s into 0s and vice versa.
* Not directly analogous to any arithmetic operator, but you could relate it to negation (-) because it inverses the sign of each bit.

**5. Left Shift (<<):**
* This operator shifts the bits of the left-hand operand to the left by a number of positions specified by the right-hand operand. It effectively multiplies the left operand by 2 to the power of the right operand.
* Analogous to multiplication (*) because it effectively multiplies the value by a power of 2.

**6. Right Shift (>>):**
* This operator shifts the bits of the left-hand operand to the right by a number of positions specified by the right-hand operand. It effectively divides the left operand by 2 to the power of the right operand.
* Analogous to division (/) because it effectively divides the value by a power of 2.


> ***So, in summary:*** <br/>
'&' and '^' are analogous to +, but with different rules for combining bits.<br/>
'|' (bitwise OR) is analogous to + (addition), but without carry-over effects.<br/>
'~' is analogous to -, but it inverses the bits.<br/>
'<<'' is analogous to *, as it effectively multiplies by powers of 2.<br/>
'>>' is analogous to /, as it effectively divides by powers of 2.<br/>
