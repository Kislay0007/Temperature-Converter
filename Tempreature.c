#include <stdio.h>
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float temperature;
    int choice;

    printf("Temperature Conversion Program\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        printf("%.2f Fahrenheit is %.2f Celsius\n", temperature, fahrenheitToCelsius(temperature));
    } else if (choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        printf("%.2f Celsius is %.2f Fahrenheit\n", temperature, celsiusToFahrenheit(temperature));
    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}
