## Rectangle Area Calculator  

### Overview  
This C program calculates the **area of a rectangle** based on the length and breadth values provided by the user. The formula used is:  
- **Area**: \(\text{Length} \cdot \text{Breadth}\)  

### Features  
- Prompts the user to input the rectangle's length and breadth.  
- Computes the area using the formula.  
- Displays the calculated area in square centimeters.  

### Code Highlights  
- Demonstrates the use of variables to store length, breadth, and area.  
- Utilizes `scanf` for user input and `printf` for displaying formatted output.  
- Includes the `getch()` function to pause program execution and display results.  

### How to Run  
1. Copy the code into a `.c` file (e.g., `rectangle_area.c`).  
2. Compile the file using a C compiler like GCC:  
   ```bash
   gcc rectangle_area.c -o rectangle_area
   ```  
3. Run the compiled program:  
   ```bash
   ./rectangle_area
   ```  
4. Enter the values for length and breadth when prompted to calculate the area.  

### Example Output  
```
 Please enter the value of length : ____  
 10  
 Please enter the value of breadth : ____  
 5  

 The area of Rectangle 50.000000 sq.cm  
```  

### Learning Objectives  
- Performing basic arithmetic operations in C.  
- Handling multiple user inputs.  
- Understanding the use of `float` data type for decimal values.  

This program provides a simple example of how to interact with users and perform basic calculations in C.  
