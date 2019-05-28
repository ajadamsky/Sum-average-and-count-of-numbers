#include <stdio.h>

int main() {


    double number;
    double sum = 0;
    double avg = 0;
    int count = 0;


// while loop
    while (1) {
        // Prints out the number
        printf("Number: ");
        scanf("%lf", &number);

        if (number == 0) // Betyr: hvis man taster 0 så stopper loopen. Må brukes "break;" i koden
            break;

        // Matematiske forlmer
        sum += number;
        count++; // "++" betyr at det printes ut hvor mange ganger sifrene er skrevet
        avg = sum / count;

    }

    // Prints out count, sum, average
    printf("Count: %d\n", count);
    printf("Sum: %g\n", sum);
    printf("Average: %g\n", avg);


    return 0;
}

