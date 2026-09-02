# Menu Card and Billing System

## Description

This project is a simple **Menu Card and Billing System developed in C**. It allows customers to select food items from different categories, enter the required quantity, and generate a final bill.

The program uses a menu-driven approach with `switch-case` statements to handle category and item selection. It calculates the subtotal, adds **5% GST**, and displays the final bill.

## Features

* Display different food categories
* Select food items from the menu
* Enter the quantity of selected items
* Add multiple items to the order
* Calculate the subtotal automatically
* Calculate 5% GST
* Generate the final bill
* Handle invalid category and item selections
* Exit the program

## Menu Categories

The program provides the following categories:

1. Starters
2. Soups
3. Main Course
4. Breads
5. Rice Items
6. Desserts
7. Cold Drinks

## How It Works

1. The program displays the available menu categories.
2. The user selects a category.
3. The available items and their prices are displayed.
4. The user selects an item and enters its quantity.
5. The program calculates the item cost using:

```text
Item Cost = Price × Quantity
```

6. The item cost is added to the subtotal.
7. The user can choose whether to add more items.
8. After completing the order, the program calculates 5% GST.
9. The final bill is displayed.

## Billing Calculation

```text
Subtotal = Sum of all item costs

GST = Subtotal × 5%

Final Bill = Subtotal + GST
```

## Concepts Used

* C Programming
* Variables and data types
* `switch-case`
* `do-while` loop
* Conditional statements
* Arithmetic operations
* Character input
* Menu-driven programming
* Input validation

## Technologies Used

* **Language:** C
* **Compiler:** GCC

## Compilation

```bash
gcc menu.c -o menu
```

## Execution

```bash
./menu
```

## Learning Outcome

This project helped in understanding **menu-driven programming, switch-case statements, loops, conditional statements, user input handling, arithmetic calculations, and basic billing logic in C**.

## Author

**Ganashri S**
