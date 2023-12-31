#include <stdio.h>

// Define the maximum number of employees
#define MAX_EMPLOYEES 50

// Function to check employee temperatures
void checkTemperatures(float temperatures[], int numEmployees) 
{
    printf("Employee with high temperatures:\n");
    for (int i = 0; i < numEmployees; i++) 
    {
        if (temperatures[i] > 98.6) 
        {
            printf("Employee %d: %.2f°F\n", i + 1, temperatures[i]);
        }
    }
}

int main() {
    int numEmployees;
    float temperatures[MAX_EMPLOYEES];

    // Prompt for the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    // Input employee temperatures
    for (int i = 0; i < numEmployees; i++) 
    {
        printf("Enter temperature for Employee %d: ", i + 1);
        scanf("%f", &temperatures[i]);
    }

    // Check and flag high temperatures
    checkTemperatures(temperatures, numEmployees);

    return 0;
}
