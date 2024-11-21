## Menu-Driven Calculator Program  

### Overview  
This C program performs basic arithmetic operations (addition, subtraction, multiplication, and division) based on the user's choice. It utilizes a **menu-driven approach** with a `switch` statement for decision-making.  

### Features  
- Accepts two integer inputs from the user (`x` and `y`).  
- Allows the user to select an operation:  
  - `+` for addition  
  - `-` for subtraction  
  - `*` for multiplication  
  - `/` for division  
- Outputs the result of the selected operation.  
- Handles invalid choices gracefully by displaying an error message.  

### Code Highlights  
- Demonstrates the use of a **`switch` statement** for menu-driven logic.  
- Accepts formatted inputs for integer values and character-based choices.  
- Illustrates error handling for unsupported options.  

### How to Run  
1. Copy the code into a `.c` file (e.g., `menu_calculator.c`).  
2. Compile the file using a C compiler like GCC:  
   ```bash
   gcc menu_calculator.c -o menu_calculator
   ```  
3. Run the compiled program:  
   ```bash
   ./menu_calculator
   ```  
4. Enter values for `x` and `y`, and select an operation when prompted.  

### Example Output  
#### Example 1: Addition  
```
Enter any value for x : ____  
5  

Enter any value for y : ____  
3  

Please enter any choice : +  

5 + 3 = 8  
```  

#### Example 2: Invalid Choice  
```
Enter any value for x : ____  
10  

Enter any value for y : ____  
2  

Please enter any choice : ^  

Invalid Option !!!  
```  

### Learning Objectives  
- Understand the use of a **menu-driven approach** in programming.  
- Learn how to use the `switch` statement for multiple-choice logic.  
- Practice basic arithmetic operations in C.  
- Handle invalid inputs effectively.  
