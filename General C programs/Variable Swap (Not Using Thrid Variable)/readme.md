## Swap Two Variables Without Using a Temporary Variable  

### Overview  
This C program swaps the values of two variables **without using a third (temporary) variable**. It uses arithmetic operations (addition and subtraction) to achieve the swapping process. This is a common programming exercise to improve understanding of variable manipulation.  

### Features  
- Accepts two integer inputs (`x` and `y`) from the user.  
- Swaps the values of `x` and `y` using arithmetic operations.  
- Displays the swapped values for verification.  

### Code Highlights  
- Demonstrates swapping without a temporary variable, utilizing the following logic:  
  - Add the values of `x` and `y` and assign the result to `x`.  
  - Subtract the new value of `y` from `x` to get the original `x` value into `y`.  
  - Subtract the new value of `y` from `x` to get the original `y` value into `x`.  
- Uses formatted input and output for a user-friendly experience.  

### How to Run  
1. Copy the code into a `.c` file (e.g., `swap_without_temp.c`).  
2. Compile the file using a C compiler like GCC:  
   ```bash
   gcc swap_without_temp.c -o swap_without_temp
   ```  
3. Run the compiled program:  
   ```bash
   ./swap_without_temp
   ```  
4. Enter values for `x` and `y` when prompted to see their swapped values.  

### Example Output  
#### Input  
```
Please Enter any value for x: ____  
10  

Please Enter any value for y: ____  
5  
```  

#### Output  
```
Value Of x & y after Swap Is  x= 5 and y= 10  
```  

### Learning Objectives  
- Understand swapping logic without a third variable.  
- Practice arithmetic manipulation of variables in C.  
- Learn how to work with formatted input and output.  
