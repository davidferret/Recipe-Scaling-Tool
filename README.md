# Recipe Scaler

This is a C project that helps you scale ingredient amounts for recipes accurately, making it easier to adjust portion sizes. It supports both fractional and decimal representations and ensures that all input values are valid.

The way I programmed this project was by implementing a system that takes an original ingredient amount and a scaling factor, then calculates the adjusted quantity. To make the results more practical, I included a feature that approximates scaled values to the closest 1/8 fraction. Input validation was also a key aspect, ensuring that you enter only positive numeric values before proceeding with the calculations.

As someone who loves to bake sweets like brownies and rum cakes, I built this project because I often found myself needing to scale recipes up or down but struggled with manually adjusting ingredient amounts. This was a great way to apply mathematical logic to a real-world problem while keeping the process intuitive. Hopefully, this helps you adjust your recipes effortlessly and get the perfect measurements every time!

## Example Output
```
Enter the original ingredient amount (in cups, tbsp, tsp, or grams): 2.5
Enter the scaling factor (e.g., 0.5 for half, 2 for double, etc.): 0.5

--- Scaled Ingredient Amount ---
New amount: 1.25 (approximate decimal)
Fractional equivalent: 10/8 cups/tbsp/tsp/grams
```

