## Circle Area and Circumference Calculator  

### Overview  
This C program calculates the **area** and **circumference** of a circle based on the radius provided by the user. It uses the formulae:  
- **Area**: \(\pi \cdot \text{radius}^2\)  
- **Circumference**: \(2 \cdot \pi \cdot \text{radius}\)  

### Features  
- Prompts the user to enter the radius of the circle.  
- Computes the area and circumference using the value of \(\pi\) approximated as 3.14.  
- Outputs the results with units (square centimeters for area and centimeters for circumference).  

### Code Highlights  
- Demonstrates basic usage of variables and constants.  
- Illustrates formatted input (`scanf`) and output (`printf`) in C.  
- Includes the use of the `getch()` function to pause program execution.  

### How to Run  
1. Copy the code into a `.c` file (e.g., `circle_calculator.c`).  
2. Compile the file using a C compiler like GCC:  
   ```bash
   gcc circle_calculator.c -o circle_calculator
   ```  
3. Run the compiled program:  
   ```bash
   ./circle_calculator
   ```  
4. Enter the radius when prompted, and view the calculated results.  

### Example Output  
```
 Please enter the value of Radius : ____  
 5  
 
 The area of the circle with radius 5.000000 cm is 78.500000 sq.cm  
 And it's circumference is 31.400000 cm.  
```  

### Learning Objectives  
- Understanding mathematical calculations in C.  
- Formatting input/output for user interaction.  
- Using `float` data type for precision in calculations.  

This program is a great starting point for learning how to work with mathematical operations and user input in C.  
