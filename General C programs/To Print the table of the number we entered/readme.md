## Multiplication Table Generator  

### Overview  
This C program generates and prints the multiplication table for a user-specified number. The table includes multiples from 1 to 10. The program uses a `do-while` loop to ensure the table is printed efficiently and consistently.  

### Features  
- Accepts a number as input from the user.  
- Dynamically generates a multiplication table from 1 to 10.  
- Provides an organized and easy-to-read output format.  
- Demonstrates the use of `do-while` loop for iterative tasks.  

### Code Highlights  
- **Input Handling**: Prompts the user to enter a number for which the multiplication table will be generated.  
- **Iterative Calculation**: Uses a `do-while` loop to calculate and display the product of the entered number with values from 1 to 10.  
- **Formatted Output**: Displays the table in a structured manner for better readability.  

### How to Run  
1. Copy the code into a `.c` file (e.g., `multiplication_table.c`).  
2. Compile the file using a C compiler like GCC:  
   ```bash
   gcc multiplication_table.c -o multiplication_table
   ```  
3. Run the compiled program:  
   ```bash
   ./multiplication_table
   ```  
4. Enter a number when prompted to see its multiplication table.

### Example Output  
#### Input  
```
Please enter any value for 'number': 5
```  

#### Output  
```
The table of 5 is as follows:
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
5 X 8 = 40
5 X 9 = 45
5 X 10 = 50
```  

### Learning Objectives  
- Understand the usage of `do-while` loops in C.  
- Explore dynamic generation of repetitive outputs based on user input.  
- Practice working with integer inputs and formatted outputs.  

### Notes  
- This program currently supports integers for the multiplication table. To extend support for floating-point numbers, adjustments can be made to the input type and calculations.  

