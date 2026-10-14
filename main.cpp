#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int employeeID;
    string employeeName;
    int departmentChoice;
    int performanceRating;
    int yearsOfService;
    double basicSalary;
    double bonusRate;
    double bonusAmount;
    double totalPay;
    int numberOfEmployees;

    cout << "======================================" << endl;
    cout << "     GAUTENG CITY COLLEGE" << endl;
    cout << "        EMPLOYEE PAYROLL SYSTEM" << endl;
    cout << "======================================" << endl;

    cout << "Enter the number of employees: ";
    cin >> numberOfEmployees;

    if (numberOfEmployees <= 0)
    {
        cout << "Invalid number. Enter a number greater than 0: ";
        cin >> numberOfEmployees;
    }

    for (int i = 1; i <= numberOfEmployees; i++)
    {
        cout << "\n--------------------------------------" << endl;
        cout << "EMPLOYEE " << i << endl;
        cout << "--------------------------------------" << endl;

        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cin.ignore(1000, '\n');

        cout << "Enter Employee Name: ";
        getline(cin, employeeName);

        cout << "Enter Basic Salary (R): ";
        cin >> basicSalary;

        while (basicSalary < 0)
        {
            cout << "Invalid salary. Enter a positive amount: R";
            cin >> basicSalary;
        }

        cout << "\nSelect Department:" << endl;
        cout << "1. IT" << endl;
        cout << "2. Sales" << endl;
        cout << "3. Finance" << endl;
        cout << "4. Human Resources" << endl;

        cout << "Enter department choice: ";
        cin >> departmentChoice;

        while (departmentChoice < 1 || departmentChoice > 4)
        {
            cout << "Invalid choice. Select a department from 1 to 4: ";
            cin >> departmentChoice;
        }

        cout << "\nEnter Performance Rating (1-5): ";
        cin >> performanceRating;

        while (performanceRating < 1 || performanceRating > 5)
        {
            cout << "Invalid rating. Enter a rating between 1 and 5: ";
            cin >> performanceRating;
        }

        cout << "Enter Years of Service: ";
        cin >> yearsOfService;

        while (yearsOfService < 0)
        {
            cout << "Invalid years of service. Enter 0 or more: ";
            cin >> yearsOfService;
        }

        if (performanceRating == 5)
        {
            bonusRate = 0.15;
        }
        else if (performanceRating == 4)
        {
            bonusRate = 0.10;
        }
        else if (performanceRating == 3)
        {
            bonusRate = 0.05;
        }
        else
        {
            bonusRate = 0.00;
        }

        // Apply department bonus using switch
        switch (departmentChoice)
        {
            case 1:
                cout << "\nDepartment: IT" << endl;
                break;

            case 2:
                cout << "\nDepartment: Sales" << endl;
                bonusRate = bonusRate + 0.02;
                break;

            case 3:
                cout << "\nDepartment: Finance" << endl;
                break;

            case 4:
                cout << "\nDepartment: Human Resources" << endl;
                break;
        }

        if (yearsOfService >= 5)
        {
            bonusRate = bonusRate + 0.03;
        }

        bonusAmount = basicSalary * bonusRate;
        totalPay = basicSalary + bonusAmount;

        cout << fixed << setprecision(2);

        cout << "\n========== PAYROLL RESULTS ==========" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: R" << basicSalary << endl;
        cout << "Performance Rating: " << performanceRating << "/5" << endl;
        cout << "Years of Service: " << yearsOfService << endl;
        cout << "Bonus Rate: " << bonusRate * 100 << "%" << endl;
        cout << "Bonus Amount: R" << bonusAmount << endl;
        cout << "Total Pay: R" << totalPay << endl;
        cout << "======================================" << endl;
    }

    cout << "\nPayroll processing completed successfully!" << endl;

    return 0;
}



