//C program 
/*
Name; Eldad Mwaura 
Reg no;CT101/G/26651/25
Description; hours worked 
*/

// main function

  #include <stdio.h>

int main() {
    float hoursWorked, hourlyWage, grossPay, overtimePay, tax, netPay;

    // Request user input for hours worked and hourly wage
    printf("Enter hours worked in a week: ");
    scanf("%f", &hoursWorked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourlyWage);

    // Calculate gross pay and overtime
    if (hoursWorked > 40) {
        overtimePay = (hoursWorked - 40) * hourlyWage * 1.5;
        grossPay = (40 * hourlyWage) + overtimePay;
    } else {
        grossPay = hoursWorked * hourlyWage;
        overtimePay = 0;
    }

    // Calculate taxes
    if (grossPay <= 600) {
        tax = grossPay * 0.15;
    } else {
        tax = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }

    // Calculate net pay
    netPay = grossPay - tax;

    // Print the results
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Overtime Pay: $%.2f\n", overtimePay);
    printf("Tax: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}
 