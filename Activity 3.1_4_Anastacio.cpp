#include <stdio.h>

void cmToInches(float cm) {
    float inches = cm / 2.54;
    printf("%.2f cm is %.2f inches\n", cm, inches);
}

void inchesToCm(float inches) {
    float cm = inches * 2.54;
    printf("%.2f inches is %.2f cm\n", inches, cm);
}

void feetToMeter(float feet) {
    float meters = feet * 0.3048;
    printf("%.2f feet is %.2f meters\n", feet, meters);
}

void meterToFeet(float meters) {
    float feet = meters / 0.3048;
    printf("%.2f meters is %.2f feet\n", meters, feet);
}

int main() {
    int choice;
    float value;

    do {
        printf("\nConversion Menu:\n");
        printf("(1) cm - inches\n");
        printf("(2) inches - cm\n");
        printf("(3) feet - meter\n");
        printf("(4) meter - feet\n");
        printf("(5) Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter value to convert: ");
            scanf("%f", &value);
        }

        switch (choice) {
            case 1:
                cmToInches(value);
                break;
            case 2:
                inchesToCm(value);
                break;
            case 3:
                feetToMeter(value);
                break;
            case 4:
                meterToFeet(value);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
