#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[20], even[20], odd[20];
    int evenCount = 0, oddCount = 0;
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even[evenCount++] = arr[i];
        else
            odd[oddCount++] = arr[i];
    }
    printf("\nEven numbers: ");
    if (evenCount == 0)
        printf("None");
    else
        for (int i = 0; i < evenCount; i++)
            printf("%d ", even[i]);

    // Display odd numbers
    printf("\nOdd numbers:  ");
    if (oddCount == 0)
        printf("None");
    else
        for (int i = 0; i < oddCount; i++)
            printf("%d ", odd[i]);

    printf("\n");
    return 0;
}
