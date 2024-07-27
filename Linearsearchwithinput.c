#include <stdio.h>

int main() {
    int n, data, i; // variable declare

    // Define the array and its size
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    n = sizeof(a) / sizeof(a[0]);

    // Element to be searched
    printf("Enter the element to be searched: ");
    scanf("%d", &data); // to take input 

    // Linear search
    for(i = 0; i < n; i++) {
        if (a[i] == data) {
            printf("Element found at index: %d\n", i);
            break;
        }
    }

    // If the loop completes without finding the element
    if (i == n) {
        printf("Element not found\n");
    }

    return 0;
}
