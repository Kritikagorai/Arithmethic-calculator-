# Arithmethic-calculator-
A simple C program to perform basic arithmetic operations like addition, subtraction, multiplication, and division.
Simple Calculator in C
This is a basic calculator program written in C that performs simple arithmetic operations like addition, subtraction, multiplication, and division based on user input.

✅ Features
Takes two numbers as input from the user.

Accepts an arithmetic operator (+, -, *, /).

Performs the corresponding operation.

Displays the result formatted to two decimal places.

Handles division by zero.

🧮 How It Works
Input First Number
The program prompts the user to enter the first number (a double).

Input Operator
The user is asked to input an operator (+, -, *, or /).
(A space is added before %c in scanf() to handle newline characters properly.)

Input Second Number
The user enters the second number.

Switch Statement
Based on the operator, the program uses a switch statement to perform the correct operation.

Output
The result is displayed using printf().

🛡 Error Handling
Division by Zero: If the user tries to divide by 0, the program displays an error message.

Invalid Operator: If the user enters an operator other than +, -, *, or /, it shows a warning.

🧪 Sample Output
mathematica
Copy
Edit
Enter your first digit: 10
Enter an operator (+, -, *, /): /
Enter your second digit: 2
Quotient is: 5.00
