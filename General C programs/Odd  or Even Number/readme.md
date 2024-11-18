## Odd or Even Number Checker  

### Overview  
This C program determines whether a given integer is an **odd** or an **even** number. It prompts the user to input a number and checks the remainder when divided by 2:  
- **Even**: The number is divisible by 2 with no remainder.  
- **Odd**: The number has a remainder of 1 when divided by 2.  

### Features  
- Simple input-output-based program for checking odd or even numbers.  
- Uses the modulo operator (`%`) to check divisibility.  

### Code Highlights  
- Demonstrates the use of `if-else` statements for decision-making.  
- Utilizes the `scanf` and `printf` functions for input and output.  
- Includes comments with the author’s name, context, and date for clarity.  

### How to Run  
1. Copy the code into a `.c` file (e.g., `odd_or_even.c`).  
2. Compile the file using a C compiler like GCC:  
   ```bash
   gcc odd_or_even.c -o odd_or_even
   ```  
3. Run the compiled program:  
   ```bash
   ./odd_or_even
   ```  
4. Enter any integer when prompted to check if it is odd or even.  

### Example Output  
```
please enter any number : 6  

The number you entered is an even number  
```  

```
please enter any number : 7  

The number you entered is an odd number  
```  

### Learning Objectives  
- Understanding the use of the modulo operator (`%`) in C.  
- Exploring decision-making with `if-else` statements.  
- Working with basic input-output functions.  

This program is a great introduction to decision-making constructs in C and how to implement basic arithmetic checks.  
