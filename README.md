# C++ Practice Exercises

This repository contains my solutions to various C++ programming exercises as I learn the language. Each project is a small, self-contained program that demonstrates my understanding of different C++ concepts.

---

## Completed Exercises

Here is a list of the exercises I have completed so far:

### Core Concepts & Fundamentals

* **Function Exercise** (`FunctionExercise/function_excercise.cpp`) - A collection of small programs to practice writing and using functions in C++, including function definitions, parameters, return types, and function overloading.
* **Simple Calculator** (`SimpleCalc/simple_cal.cpp`) - A basic command-line calculator to handle arithmetic operations. Demonstrates user input handling and basic arithmetic logic.

### Object-Oriented Programming

* **Bank Account** (`BankAccount/bank_account.cpp`) - A simple bank account management system, focusing on classes, objects, and encapsulation. Includes deposit, withdrawal, and balance inquiry functionality.
* **Shape Hierarchy** (`ShapeHierarchy/Shape_Hierarchy.cpp`) - A project demonstrating object-oriented principles like inheritance and polymorphism to model different geometric shapes. Calculates area and perimeter for various shapes.

### Advanced Applications

* **Complex Number Arithmetic** (`ComplexNumberArithemetic/complex_number_arithmetic.cpp`) - A program that implements complex number operations using classes and operator overloading.
* **Text Analyzer** (`TextAnalyzer/text_analyzer.cpp`) - A program that analyzes text files to provide statistics like word count, character count, line count, and frequency analysis.
* **Inventory Manager** (`InventoryManager/inventory_manager.cpp`) - An inventory management system that tracks products, quantities, and prices. Demonstrates data structures, searching, and updating records.

---

## Project Structure

```
myExercises/
├── BankAccount/
│   └── bank_account.cpp
├── ComplexNumberArithemetic/
│   └── complex_number_arithmetic.cpp
├── FunctionExercise/
│   └── function_excercise.cpp
├── InventoryManager/
│   └── inventory_manager.cpp
├── ShapeHierarchy/
│   └── Shape_Hierarchy.cpp
├── SimpleCalc/
│   └── simple_cal.cpp
├── TextAnalyzer/
│   └── text_analyzer.cpp
└── README.md
```

---

## Building & Running

Each project is a standalone C++ program. To compile and run:

### Compile a project

Using clang++ (recommended for macOS):
```bash
clang++ -std=c++20 -o output_name path/to/source.cpp
```

Or using g++:
```bash
g++ -std=c++17 -o output_name path/to/source.cpp
```

### Run the executable

```bash
./output_name
```

### Example

```bash
clang++ -std=c++20 -o calculator SimpleCalc/simple_cal.cpp
./calculator
```

---

## Tools & Environment

- **Language:** C++17/C++20
- **Compiler:** clang++ or g++
- **IDE:** Visual Studio Code
- **Platform:** macOS

---

This repository is used for tracking my C++ learning progress.
