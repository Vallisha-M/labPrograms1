#include <stdio.h>
#include <conio.h>
int main()
{
struct employeedetails
{
    char  empname[100];
    int eno;
    float salary;
    char   gender[6];
    char    maritalstatus[12];
};
    employeedetails emp;
    printf("Enter name of employee : ");
    scanf("%s",&emp.empname);
    printf("Enter gender of employee : ");
    scanf(" %s",&emp.gender);
    printf("Enter salary of employee : ");
    scanf("%f",&emp.salary);
    printf("Enter marital status of the employee : ");
    scanf(" %s",&emp.maritalstatus);
    printf("Enter id number of the employee : ");
    scanf("%d",&emp.eno);
    printf("\n*****EMPLOYEE DETAILS*****");
    printf(" \nNAME : %s\t",emp.empname);
    printf("\t\nSALARY : %f ",emp.salary);
    printf("\t\nGENDER : %s",emp.gender);
    printf("\t\nEMPLOYEE NO : %d",emp.eno);
    printf("\t\nMARITAL STATUS : %s",emp.maritalstatus);
    return 0;
}
