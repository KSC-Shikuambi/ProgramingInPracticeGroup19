#include <stdio.h>
int main(){
    //This is the code for lab 1
    //Declare Variables
    double basicSalary=0.00;
    double housingAllowance=0.00;
    double transportAllowance=0.00;
    double taxAmount=0.00;
    double grossSalary=0.00;
    double netSalary=0.00;

    //1.Prompt user for Basic Salary
    printf("Enter Basic Salary");
    scanf("%lf", &basicSalary);

    //2. Prompt user for Housing Allowance
    printf("Enter Housing Allowance");
    scanf("%lf", &housingAllowance);

    //3. Prompt user for Transport Allowance
    printf("Enter Transport Allowance");
    scanf("%lf", &transportAllowance);

    //4. Prompt user for Tax Amount
    printf("Enter tax amount");
    scanf("%lf", &taxAmount);

    //5. Displaying Gross Salary
    grossSalary=basicSalary +transportAllowance +housingAllowance;
    printf("This is the Gross Salary: %lf", grossSalary);

    //6. Displaying Net Salary
    netSalary=grossSalary-taxAmount;
    printf("This is the net salary: %lf", netSalary);
    return 0;
}