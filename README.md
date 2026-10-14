README.MD

## Project Description

The Employee Payroll System is a C++ console-based application developed for the Introduction to Programming assignment at Gauteng City College. The program calculates employee bonuses based on performance ratings, department and years of service, then calculates the employee's total pay.

## Bonus Rules

The program uses the following rules to calculate employee bonuses:

* **Performance Rating:** A rating of 5 earns a 15% bonus, a rating of 4 earns 10%, and a rating of 3 earns 5%. Ratings of 1 or 2 earn no performance bonus.
* **Department:** Employees in Sales receive an additional 2% bonus.
* **Years of Service:** Employees with five or more years of service receive an additional 3% bonus.

The bonus percentages are added together to calculate the total bonus rate.

**Bonus Amount = Basic Salary × Bonus Rate**

**Total Pay = Basic Salary + Bonus Amount**

## Technologies Used

* C++
* Code::Blocks 25.03

## How to Compile and Run

1. Open the C++ source file in a C++ development environment.
2. Compile the program using a C++ compiler.
3. Run the compiled program.
4. Enter the requested employee information when prompted.
5. View the calculated bonus amount and total pay.

Alternatively, if a C++ compiler such as g++ is installed, the program can be compiled using:

```bash
g++ main.cpp -o payroll
```

On Windows, run the compiled program using:

```bash
payroll.exe
```

## Example Calculation

An employee has the following details:

* Basic Salary: R10,000
* Department: Sales
* Performance Rating: 5
* Years of Service: 6

The employee qualifies for a 20% bonus.

* Bonus Amount: R2,000
* Total Pay: R12,000

## Programming Concepts Used

The program demonstrates:

* Variables and data types.
* User input and console output.
* If and else if statements.
* A switch statement.
* A for loop.
* Basic input validation.
* Arithmetic calculations.

## Author

**Name:** Richy Milambu Borwa

**Institution:** Gauteng City College

**Course:** Introduction to Programming — C++

**Assignment:** Practical Assignment 1

**LinkedIn Profile:** [Insert your LinkedIn profile link]

## References

* Gauteng City College, Introduction to Programming — Practical Assignment 1.
* OpenAI ChatGPT, used for assistance with understanding the assignment and C++ programming concepts.

Additional sources consulted during development should also be listed here.
