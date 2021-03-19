

// C program for
// the above approach
#include <stdio.h>
int main()
{
    // Given number
    int n = 11;
    // checking the given number
    // whether it is 1 or not
    if (n == 1) {
        printf("%d is not a prime number", n);
    }
    else {
        int f = 0;
        // iterate from 2 to n/2
        for (int i = 2; i <= (n / 2); i++) {
           
            // If n is divisible by any number between
            // 2 and n/2, it is not prime
            if (n % 2 == 0) {
                f = 1;
               
                // break out of for loop as
                // it is not prime
                break;
            }
        }
        if (f == 1) {
            printf("%d is not a prime number", n);
        }
        else {
            printf("%d is a prime number", n);
        }
    }
    return 0;
}
// This Code is Contributed by
// Murarishetty Santhosh Charan