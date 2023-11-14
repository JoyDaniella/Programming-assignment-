#include<stdio.h>

int main()
{
    char regNumber [20], firstName [6], lastName [10];
    float intro [4], networkingUnit [4], accountingUnit [4], os [4], c_App[4];
   
   
   
    printf("registration number\n");
    scanf("%s",& regNumber);
    printf("Welcome %s", regNumber); 
    
    printf("Enter your first name\n");
    scanf("%s",& firstName);
    printf("Welcome %s", firstName);
    
    
    printf("Enter your Last Name\n");
    scanf("%s",& lastName);
    printf("Welcome  %s", lastName); 
    
   
    printf("Enter Introduction to Programming score\n");
    scanf("%f",& intro);
    printf("Welcome  %f", intro); 
    
    
    printf("Enter Networking score\n");
    scanf("%f",& networkingUnit);
    printf("Welcome %f", networkingUnit); 
    
     
    printf("Enter Accounting score\n");
    scanf("%f",& accountingUnit);
    printf("Welcome %f", accountingUnit); 
    
    
    printf("Enter Operating System score\n");
    scanf("%f",& os);
    printf("Welcome %f", os); 
    
    
    printf("Enter Computer Application score\n");
    scanf("%f",& c_App);
    printf("Welcome %f", c_App); 
    return 0;
 
}