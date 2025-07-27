# EXPERIMENT NO - 06

* Aim:
To explore and implement different types of loops in C++ to perform repetitive tasks efficiently.

* Tools Used - IDE, Looping statements, operators etc

* Theory:

  In C++, looping statements are used when a block of code needs to be executed multiple times. Loops help reduce code redundancy and allow dynamic repetition based on conditions.

  🔹 Types of Loops in C++:

  1. *For Loop:*
Used when the number of iterations is known or fixed ahead of time. It consists of an initializer, condition, and increment/decrement in one line, making it compact and structured.

  🔸 Syntax:

      for (int i = 0; i < n; i++){
    
          cout << i; }

  2. *While Loop:*
 Used when the number of iterations is not known in advance. The loop runs as long as the condition is true, and the condition is checked before entering the loop body.

  🔸 Syntax:

      int i = 0;
      while (i < n) {
         cout << i;
         i++;
      }

  3. *Do-While Loop:*
 This loop executes at least once, regardless of whether the condition is true or false. The condition is checked after the loop body, which ensures one-time execution even  if the condition is initially false.

  🔸 Syntax:

      int i = 0;
      do {
        cout << i;
        i++;
      } while (i < n);

# Printing Even Values Between 1 to 10

  This C++ program demonstrates the use of a for loop along with an if condition to identify and print all even numbers between 0 and 10 (excluding 10). The loop iterates through numbers 1 to 9, and for each number, it checks whether it is divisible by 2. If the condition is true (i % 2 == 0), the number is printed.

  *ALGORITHM:*

1> Start

2> Use for loop to iterate i from 1 to 9

3> Inside the loop, check if i % 2 == 0

  * If true, print i as it's an even number

  * Continue until i reaches 9

4> Exit the loop

5> End

# Print "SIT" 5 Times Using A For Loop

This program prints the string "SIT" five times using a for loop. It demonstrates the use of string variables and iteration in C++.

*ALGORITHM:*

1> Start

2> Declare a string variable a and assign it the value "SIT".

3> Use a for loop with counter variable i from 0 to 4 (5 times).

4> Inside the loop, print the string a.

5> Repeat until the loop ends.

6> End

# Secure Password-Based Authentication System

This C++ program implements a basic password-based security system. It first enforces password rules like minimum length and the presence of a special character. After successful password creation, it verifies the user by asking them to re-enter the password, using a loop for repeated attempts until the correct password is entered. This demonstrates the use of strings, conditionals, loops, and boolean logic in C++.

*ALGORITHM:*

1>Start

2>Declare variables:

  * user_defined_password (string) – to store the user’s created password
    
  * input_password (string) – to store the re-entered password for verification
    
  * has_special (bool) – flag to check for special character (initialize as false)

3> Display password creation instructions and accepted special characters

4> Prompt the user to create a password

  * Take input and store it in user_defined_password

5> Check password length:

  * If password has less than 4 characters, display "Password too short"
    
  * Exit the program

6> Loop through each character in user_defined_password

  * If any character matches @, #, $, %, &, !, set has_special = true
    
  * Break the loop once a valid special character is found

7> Check the special character flag:

  * If has_special is still false, display error message
    
  * Exit the program

8> Prompt the user to re-enter the password for authentication

  * Take input and store it in input_password

9> Use a while loop to check if input matches the created password:

  * If incorrect, display "Access Denied", ask for password again
    
  * If correct, display "Access Granted" and break the loop

10> Display session termination message

11> End

# Nested For Loop(Inner and Outer)

This program demonstrates the concept of nested loops, where a loop runs inside another loop. The outer loop controls how many times the inner loop runs completely.

*ALGORITHM:*

1> Start

2> Declare loop variables i and j

3> Outer loop from i = 1 to 2

  * Print "Outer: i"

4> Inner loop from j = 1 to 3

  * Print "Inner: j"

5> End

# Reverse a 5 digit number using for loop

This program takes an integer input and reverses its digits using a while loop. At each step, the last digit is extracted and added to a new reversed number.

*ALGORITHM:*

1> Start

2> Declare variables:

  * n (input number), reversed = 0, digit, original

3> Prompt user to enter a number and store in n

  * Set original = n

4> While n > 0:

  * Extract last digit → digit = n % 10

  * Print n and digit

  * Update reversed → reversed = reversed * 10 + digit

  * Reduce n → n = n / 10

5> Print the reversed number

6> End

# Simple Pyramid Star Pattern

This program prints a right-angled triangle pattern using nested for loops. The outer loop controls the number of rows, and the inner loop controls the number of stars printed in each row.

*ALGORITHM:*

1> Start

2> Declare variables:

  * i, j for loops

  * n = 5 (number of rows)

3> Use outer for loop from i = 1 to n

  * This controls the number of rows

4> Inside the outer loop, use inner for loop from j = 1 to i

  * Print * in each iteration

5> After inner loop, print a newline (endl) to move to the next row

6> End

# Flipped Simple Pyramid Star Pattern

This program prints a right-aligned triangle pattern using nested for loops. The first inner loop prints spaces to shift stars to the right, and the second inner loop prints stars (*). The alignment is achieved by decreasing the number of spaces and increasing stars in each row.

*ALGORITHM:*

1> Start

2> Declare variables:

  * i, j, k for loop control

  * n = 5 (total number of rows)

3> Use outer loop from i = 1 to n

  * Controls the number of rows

4> Use inner loop j = 1 to n - i

  * Print spaces (" ") to shift stars to the right

5> Use another loop k = 1 to i

  * Print stars (*) after the spaces

6> After both inner loops, print newline (endl) to move to the next row

7> End

# Continuous Alphabet Pyramid

This program prints a pattern of increasing capital alphabets in a triangle format using nested for loops. The outer loop controls the number of rows, and the inner loop prints the characters. The character ch starts from 'A' and increments after each print, producing a sequential alphabet pattern.

*ALGORITHM:*

1> Start

2> Declare variables:

  * ch (char) = 'A' – to hold the current alphabet

  * rows (int) = 4 – total number of rows to print

3> Use outer loop from i = 1 to rows

  * Controls number of lines

4> Use inner loop from j = 1 to i

  * Print current character ch

  * Increment ch after each print

5> After inner loop, print newline (endl) to move to next row

6> End

# Flyod's Series

This program prints a triangle pattern of consecutive numbers starting from 1. It uses nested for loops: the outer loop controls the number of rows, and the inner loop prints the numbers while incrementing a counter variable after each print.

*ALGORITHM:*

1> Start

2> Declare variables:

  * num (int) = 1 – to hold the current number to print

  * rows (int) = 4 – total number of rows in the pattern

3> Use outer loop from i = 1 to rows

  * Controls the number of lines

4> Use inner loop from j = 1 to i

  * Print num followed by space

  * Increment num by 1 after each print

5> After inner loop, print newline (endl) to move to next row

6> End

# Hourglass Star Pattern

This program prints a symmetric hourglass pattern using stars (*). It is divided into two parts:

i) The first for loop creates the upper inverted triangle.

ii) The second for loop prints the lower triangle.

Spacing is handled using nested loops to align the stars properly.

*ALGORITHM:*

1> Start

2> Declare variables:

  * i, j, k (int) – loop counters

  * n = 5 – controls the size of the pattern

3> First Half (Upper Inverted Triangle):

  * Loop i from 1 to n - 1

  * Loop j from -1 to i - 1 → print space (" ")

  * Loop k from 1 to n - i + 1 → print "* "

  * Print newline

4> Second Half (Lower Triangle):

  * Loop i from n down to 1

  * Loop j from 1 to i + 1 → print space (" ")

  * Loop k from 1 to n - i + 1 → print "* "

  * Print newline

5> End


# Conclusion:

Looping constructs in C++ simplify tasks that require repeated execution of code. Each loop type has its ideal use case depending on whether the number of repetitions is known, unknown, or requires guaranteed execution. Mastery of these loops is essential for building efficient and robust programs.


