## Gift Selection Based on Domain  

### Overview  
This C program simulates a simple **gift selection system** where a user selects their domain from the given options:  
1. **Science & Mathematics**  
2. **Science**  
3. **Mathematics**  

Based on the user's selection, the program assigns an appropriate gift in monetary terms.  

### Features  
- Prompts the user to select a domain using an integer input.  
- Uses conditional statements (`if-else if`) to determine the gift value for the selected domain.  
- Displays an error message if the user enters an invalid choice.  

### Code Highlights  
- Demonstrates the use of decision-making constructs (`if-else if-else`).  
- Implements a user-friendly menu-based input system.  
- Includes comments with the author's name, context, and date for documentation clarity.  

### How to Run  
1. Copy the code into a `.c` file (e.g., `gift_selection.c`).  
2. Compile the file using a C compiler like GCC:  
   ```bash
   gcc gift_selection.c -o gift_selection
   ```  
3. Run the compiled program:  
   ```bash
   ./gift_selection
   ```  
4. Select an option by entering the corresponding number (1, 2, or 3) when prompted.  

### Example Output  
#### Valid Input  
```
Please Select your domain From the following  
 1. Science & Mathematics  
 2. Science  
 3. Mathematics  
_____  
1  

The domain you entered is Science and Mathematics  
And So you will get 45 Rupees as a gift!  
```  

#### Invalid Input  
```
Please Select your domain From the following  
 1. Science & Mathematics  
 2. Science  
 3. Mathematics  
_____  
4  

Error! Invalid Choice  
```  

### Learning Objectives  
- Understanding how to implement menu-driven programs.  
- Using `if-else if` statements for decision-making.  
- Building interactive programs with formatted input and output.  
