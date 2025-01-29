# 🍽 Recipe Scaler - C Program

## 🚀 Overview
This C program allows users to scale ingredient amounts for recipes efficiently. Whether you're halving a recipe, doubling it, or adjusting for any serving size, this tool provides both decimal and fractional outputs for precision.

## 🛠 Features
- **Flexible Scaling**: Supports any positive scaling factor (e.g., 0.5 for half, 2 for double, etc.).
- **Fractional Approximation**: Converts scaled amounts into the closest 1/8 fraction for ease of measurement.
- **Robust Input Validation**: Ensures users enter positive numeric values only.

## 📜 How It Works
1. The user enters the original ingredient amount (in cups, tablespoons, teaspoons, or grams).
2. The user specifies a scaling factor.
3. The program calculates the new ingredient amount and displays:
   - The approximate decimal value
   - The closest fractional equivalent

## 🏗 Code Structure
- **`scaleRecipe(double originalAmount, double scaleFactor)`**: Computes and displays the new ingredient amount.
- **`displayFraction(double value)`**: Converts decimal values into a fractional representation using 1/8 as the smallest unit.
- **`main()`**: Handles user input validation and calls the necessary functions.

## 🔧 Compilation & Execution
To compile and run the program, use the following commands:
```bash
gcc recipe_scaler.c -o recipe_scaler
./recipe_scaler
```

## 🎯 Example Usage
```
Enter the original ingredient amount (in cups, tbsp, tsp, or grams): 2.5
Enter the scaling factor (e.g., 0.5 for half, 2 for double, etc.): 0.5

--- Scaled Ingredient Amount ---
New amount: 1.25 (approximate decimal)
Fractional equivalent: 10/8 cups/tbsp/tsp/grams
```

## 📬 Contributions & Feedback
Feel free to contribute or suggest improvements to enhance the program. Happy cooking! 🍳

