# Scientific-Calculator
This project is a console-based scientific calculator developed in C++ that performs a wide range of mathematical operations. Designed for both academic and practical use, the calculator supports basic arithmetic as well as advanced functions such as trigonometry, logarithms, exponentiation, and more.




How to Use This Digital Calculator Program
This is a command-line calculator that runs in a terminal (like Command Prompt on Windows or Terminal on Mac/Linux). Here’s how to use it:

Step 1: Run the Program
Compile the code (if needed) using a C++ compiler like g++:

sh
g++ calculator.cpp -o calculator
Run the executable:

sh
./calculator  # (Linux/Mac)
calculator.exe  # (Windows)
(If you're using an IDE like Code::Blocks or Visual Studio, just compile and run it normally.)

Step 2: Main Menu
When you start the program, you’ll see a list of options:

WELCOME TO DIGITAL CALCULATOR  
_______________________________________________________________________________

Press 1 for arithmetic operations  
Press 2 for exponential operations  
Press 3 for trigonometric functions  
Press 4 for logarithms  
Press 5 for square roots  
Press 6 for hyperbolic functions  
Press 7 for statistics  
Press 8 for fractions  
Press 9 for binary operations  
Press 10 to EXIT  
Just type the number of the operation you want and press Enter.

Step 3: Using Different Functions
1️⃣ Basic Arithmetic (+, -, ×, ÷, %)
Choose 1 → Then select:

1 (Addition): Enter two numbers → Get the sum.

2 (Subtraction): Enter two numbers → Get the difference.

3 (Multiplication): Enter two numbers → Get the product.

4 (Division): Enter two numbers → Get the quotient (error if dividing by zero).

5 (Percentage): Enter two numbers (e.g., 20 and 50) → Get 20% of 50 = 10.

6 (Universal Calculator): Type a math expression like 2 + 3 * 5 → Get 17.

2️⃣ Exponents & Roots (x^y, √x, e^x)
Choose 2 → Then select:

1 (Power): Enter base & exponent → Get result (e.g., 2^3 = 8).

2 (Square): Enter a number → Get its square.

3 (Cube): Enter a number → Get its cube.

4 (Square Root): Enter a number → Get its square root.

5 (Cube Root): Enter a number → Get its cube root.

6 (e^x): Enter exponent → Get e raised to that power.

3️⃣ Trigonometry (sin, cos, tan)
Choose 3 → Then select:

1 (Sine): Enter angle → Choose D (degrees) or R (radians) → Get sin(x).

2 (Cosine): Same as above, but for cos(x).

3 (Tangent): Same as above, but for tan(x).

4-6 (Inverse Trig): For asin, acos, atan (input must be between -1 and 1).

4️⃣ Logarithms (ln, log10, custom base)
Choose 4 → Then select:

1 (Natural Log): Enter a positive number → Get ln(x).

2 (Base-10 Log): Enter a positive number → Get log10(x).

3 (Custom Base): Enter number & base → Get log_base(x).

5️⃣ Square Roots (√x)
Choose 5 → Enter a number → Get its square root. (Negative numbers give an error.)

6️⃣ Hyperbolic Functions (sinh, cosh, tanh)
Choose 6 → Then select:

1-3 (sinh, cosh, tanh): Enter a number → Get result.

4-6 (Inverse Hyperbolic): Enter valid input → Get result.

7️⃣ Statistics (Mean, Median, Mode, Std Dev)
Choose 7 → Then select:

Enter how many numbers you have.

Enter each number one by one.

Get results like average, median, mode, standard deviation, or variance.

8️⃣ Fractions (Add, Subtract, Multiply, Divide)
Choose 8 → Then select:

1-4 (Operations): Enter two fractions (like 1 2 for ½) → Get result in simplified form.

5 (Simplify): Enter a fraction → Get reduced form.

9️⃣ Binary Operations (0s & 1s)
Choose 9 → Then select:

1-4 (Add/Subtract/Multiply/Divide): Enter two binary numbers → Get result in binary.

5 (Decimal to Binary): Enter a decimal number → Get binary equivalent.

6 (Binary to Decimal): Enter a binary number → Get decimal equivalent.

7-10 (Bitwise AND/OR/XOR/NOT): Enter binary numbers → Get bitwise result.

🔟 Exit the Program
Choose 10 → The calculator closes.

Step 4: After Getting a Result
After each calculation, you’ll see:

ENTER 1 TO TRY AGAIN  
ENTER 0 TO MAIN MENU  
Press 1 to repeat the same operation.

Press 0 to go back to the main menu.

Example Walkthrough
Want to calculate sin(30°)?

Run the program.

Press 3 (Trigonometric Functions).

Press 1 (Sine).

Enter 30.

Press D (for degrees).

Result: 0.5.

Press 0 to go back to the main menu.
