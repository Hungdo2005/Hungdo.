#include <stdio.h>
int isPrime(int num);
void printTriangle(int n);
void printSquare(int n);

int main() {
    int choice;
    do {
        printf("\nApplication Menu:\n");
        printf("1. Check Prime Number\n");
        printf("2. Check Time\n");
        printf("3. Print Triangle\n");
        printf("4. Print Square\n");
        printf("5. Input and Output an Array\n");
        printf("6. Print Prime number in an Array\n");
        printf("7. Quit\n");
        
        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Check Prime Number
            {
                int num;
                printf("Input number to check: ");
                scanf("%d", &num);

                if (isPrime(num)) {
                    printf("Valid!\n");
                } else {
                    printf("Invalid!\n");
                }
            }
            break;

            case 2: // Check Time
            {
                int hours, minutes;
                printf("Input time (hh mm) to check: ");
                scanf("%d %d", &hours, &minutes);

                if (hours >= 0 && hours < 24 && minutes >= 0 && minutes < 60) {
                    printf("Valid!\n");
                } else {
                    printf("Invalid!\n");
                }
            }
            break;

            case 3: // Print Triangle
            {
                int height;
                printf("Triangle: Input n: ");
                scanf("%d", &height);

                printTriangle(height);
            }
            break;

            case 4: // Print Square
            {
                int width;
                printf("Square: Input n: ");
                scanf("%d", &width);

                printSquare(width);
            }
            break;

            case 5: // Input and Output an Array
            {
                int n;
                printf("Input number of elements: ");
                scanf("%d", &n);

                int arr[n];
                for (int i = 0; i < n; i++) {
                    printf("Input A[%d]: ", i);
                    scanf("%d", &arr[i]);
                    printf("A[%d] is %d\n", i, arr[i]);
                }
            }
            break;

            case 6: // Print Prime number in an Array
{
         	int n;
    		printf("Input number of elements: ");
    		scanf("%d", &n);

    		int arr[n];
    		printf("Input array: ");
    		for (int i = 0; i < n; i++) {
        		scanf("%d", &arr[i]);
    }

    			printf("Number prime in your array: ");
    			for (int i = 0; i < n; i++) {
        			if (isPrime(arr[i])) {
            		printf("%d, ", arr[i]);
        }
    }
    			printf("\n");
}
break;

            case 7: // Quit
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 7);

    return 0;
}

int isPrime(int num) {
    if (num < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

void printTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void printSquare(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("*\t");
        }
        printf("\n");
    }
}
