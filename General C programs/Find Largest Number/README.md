## Greatest Number Finder  

### Overview  
This C program determines the greatest number among three user-input integers. It compares the numbers using **logical operators** and outputs the result. If all three numbers are equal, it notifies the user accordingly.  

### Features  
- Accepts three integer inputs from the user.  
- Compares the numbers using a series of `if-else if` conditions.  
- Displays the greatest number or indicates if all numbers are equal.  

### Code Highlights  
- Demonstrates the use of **relational** and **logical operators** (`>`, `&&`) for comparisons.  
- Utilizes formatted prompts for better user interaction.  
- Shows how to handle equality and multiple conditions in decision-making constructs.  

### How to Run  
1. Copy the code into a `.c` file (e.g., `greatest_number.c`).  
2. Compile the file using a C compiler like GCC:  
   ```bash
   gcc greatest_number.c -o greatest_number
   ```  
3. Run the compiled program:  
   ```bash
   ./greatest_number
   ```  
4. Enter values for three numbers when prompted to find the greatest among them.  

### Example Output  
#### Example 1  
```
Please enter a value for First Number : ___  
5  

Please enter a value for Second Number : ___  
3  

Please enter a value for Third Number : ___  
4  

First Number is the greatest of all  
```  

#### Example 2  
```
Please enter a value for First Number : ___  
7  

Please enter a value for Second Number : ___  
7  

Please enter a value for Third Number : ___  
7  

All Values are equal  
```  

### Learning Objectives  
- Understanding the use of **if-else if-else** decision-making constructs in C.  
- Applying logical operators to evaluate multiple conditions.  
- Enhancing formatted input and output for better user experience.  
