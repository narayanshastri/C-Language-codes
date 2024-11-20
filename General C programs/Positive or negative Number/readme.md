## Positive or Negative Number Checker  

### Overview  
This C program determines whether a given integer is **positive** or **negative**. The program uses a simple conditional statement to classify the input and displays the appropriate message.  

### Features  
- Accepts a single integer input from the user.  
- Checks if the number is **positive** (greater than or equal to zero) or **negative** (less than zero).  
- Displays the classification result along with a completion message.  

### Code Highlights  
- Demonstrates the use of **relational operators** (`>=`, `<`) for classification.  
- Utilizes formatted prompts and outputs for better user interaction.  
- Ends with a completion message to indicate the program's successful execution.  

### How to Run  
1. Copy the code into a `.c` file (e.g., `positive_negative_checker.c`).  
2. Compile the file using a C compiler like GCC:  
   ```bash
   gcc positive_negative_checker.c -o positive_negative_checker
   ```  
3. Run the compiled program:  
   ```bash
   ./positive_negative_checker
   ```  
4. Enter a number when prompted to check if it is positive or negative.  

### Example Output  
#### Example 1  
```
Enter any value for x : ____  
5  

5 is a Positive number  
Program is Completed  
```  

#### Example 2  
```
Enter any value for x : ____  
-3  

-3 is a Negative number  
Program is Completed  
```  

### Learning Objectives  
- Understanding the use of **if-else** constructs for decision-making.  
- Working with relational operators for comparison.  
- Creating interactive programs with formatted input and output.  
