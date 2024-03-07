#include <math.h>
#include <stdio.h>

// A function to check whether the entered coefficients are correct
int isValidCoefficients(float a, float b, float c) {
    return !isnan(a) && !isnan(b) && !isnan(c) && !isinf(a) && !isinf(b) && !isinf(c);
}

// A function to calculate the discriminant
float calculateDiscriminant(float a, float b, float c) {
    return b * b - 4 * a * c;
}

// A function for calculating the roots of a quadratic equation
void findRoots(float a, float b, float c) {
    if (a == 0) {
        printf("The coefficient 'a' cannot be zero. The equation is not square.\n");
        return;
    }

    float discriminant = calculateDiscriminant(a, b, c);

    if (discriminant > 0) {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root equations: %.6f and %.6f\n", root1, root2);
    } else if (discriminant == 0) {
        float root = -b / (2 * a);
        printf("The discriminant is zero, the equation has one real root: %.6f\n", root);
    } else {
        printf("The discriminant is negative, the equation has no real roots.\n");
    }
}

int main() {
    float a, b, c;
    printf("Enter the coefficients a, b, c: ");
    if (scanf("%f %f %f", &a, &b, &c) != 3 || !isValidCoefficients(a, b, c)) {
        printf("Error entering coefficients or they are not correct.\n");
        return 1;
    }
    findRoots(a, b, c);
    return 0;
}
