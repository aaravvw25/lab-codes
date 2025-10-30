// Given an array of integers and a target sum, find a contiguous subarray that adds up to the target sum.
#include <stdio.h>

int main() {
    int n, target;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    int start = 0, end = 0, sum = 0;
    int found = 0;

   
    for (end = 0; end < n; end++) {
        sum = sum + arr[end];

        
        while (sum > target && start <= end) {
            sum = sum - arr[start];
            start++;
        }

        
        if (sum == target) {
            printf("Subarray with given sum found from index %d to %d:\n", start, end);
            printf("[ ");
            for (int i = start; i <= end; i++) {
                printf("%d ", arr[i]);
            }
            printf("]\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("No subarray found with the given sum.\n");

    return 0;
}

// Find the contiguous subarray within an array that has the largest product.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxProduct = arr[0];
    int minProduct = arr[0];  
    int result = arr[0];

    for (int i = 1; i < n; i++) {
      
        if (arr[i] < 0) {
            int temp = maxProduct;
            maxProduct = minProduct;
            minProduct = temp;
        }

       
        if (arr[i] > maxProduct * arr[i])
            maxProduct = arr[i];
        else
            maxProduct = maxProduct * arr[i];

        if (arr[i] < minProduct * arr[i])
            minProduct = arr[i];
        else
            minProduct = minProduct * arr[i];

       
        if (maxProduct > result)
            result = maxProduct;
    }

    printf("Maximum product of a contiguous subarray = %d\n", result);

    return 0;
}


// Rotate an N×N matrix clockwise by 90 degrees in place.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the matrix (N): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - j - 1];
            matrix[i][n - j - 1] = temp;
        }
    }

    
    printf("Matrix after rotating 90 degrees clockwise:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// Print all elements of a matrix in spiral order.
#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;

    printf("Spiral order of matrix:\n");

    while (top <= bottom && left <= right) {
      
        for (int i = left; i <= right; i++) {
            printf("%d ", matrix[top][i]);
        }
        top++;

        
        for (int i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;

        
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }

        
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }

    printf("\n");
    return 0;
}


// Count the number of words in the string
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {

            count++;
        }
    }

    
    if (strlen(str) > 0 && str[0] != ' ' && str[0] != '\t')
        count++;

    printf("Number of words in the string = %d\n", count);

    return 0;
}


// For each element, print the product of all other elements (without using division)

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int left[n], right[n], product[n];


    left[0] = 1;
    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] * arr[i - 1];
    }

    
    right[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        right[i] = right[i + 1] * arr[i + 1];
    }

    

    for (int i = 0; i < n; i++) {
        product[i] = left[i] * right[i];
    }

    
    printf("Product of all other elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", product[i]);
    }

    printf("\n");
    return 0;
}

