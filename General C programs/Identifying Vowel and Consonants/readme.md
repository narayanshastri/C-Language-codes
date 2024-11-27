## Vowel or Consonant Checker  

### Overview  
This C program determines whether an entered character is a vowel or not. It checks the user input against a predefined set of vowels (`a, e, i, o, u`) and outputs the result. This program is a simple demonstration of decision-making in C.  

### Features  
- Accepts a single character input from the user.  
- Checks whether the character is one of the lowercase vowels (`a, e, i, o, u`).  
- Provides user-friendly output indicating if the character is a vowel or not.  

### Code Highlights  
- **Input Validation**: Ensures only a single character is processed for the check.  
- **Conditional Logic**: Utilizes the logical OR (`||`) operator to evaluate multiple vowel conditions within a single `if` statement.  
- **Case Sensitivity**: Currently handles lowercase vowels; uppercase vowels (`A, E, I, O, U`) can be added if required.  
- **Readability Tip**: Includes a warning in the comments to avoid using `:` or `;` after `if` or `else` conditions.  

### How to Run  
1. Copy the code into a `.c` file (e.g., `vowel_checker.c`).  
2. Compile the file using a C compiler like GCC:  
   ```bash
   gcc vowel_checker.c -o vowel_checker
   ```  
3. Run the compiled program:  
   ```bash
   ./vowel_checker
   ```  
4. Enter a single character when prompted to see the result.

### Example Output  
#### Input  
```
please enter any character of your choice ____  
a  
```  

#### Output  
```
The entered Alphabet i.e. a is a vowel  
```  

#### Input  
```
please enter any character of your choice ____  
x  
```  

#### Output  
```
The entered Alphabet i.e. x is Not a vowel  
```  

### Learning Objectives  
- Understand how to use conditional statements in C.  
- Practice working with character inputs and comparisons.  
- Explore logical operators for multiple condition checks.  

