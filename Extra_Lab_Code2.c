// Write a program to search a given number in an array
#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the number to search: ");
    scanf("%d", &key);

    
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;   
        }
    }

    
    if (found)
        printf("%d found at position %d (index %d)\n", key, i + 1, i);
    else
        printf("%d not found in the array\n", key);

    return 0;
}



// Write a program to copy all elements of one array into another.
#include <stdio.h>

int main() {
    int n, i;

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];  

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    
    for (i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    
    printf("\nElements copied into second array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    printf("\n");

    return 0;
}

// Write a program to find the element that appears most frequently in the array.
#include <stdio.h>

int main() {
    int n, i, j, maxCount, element;

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    maxCount = 0;    
    element = arr[0]; 

    for (i = 0; i < n; i++) {
        int count = 1; 
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        
        if (count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }

    
    printf("\nMost frequent element: %d (appears %d times)\n", element, maxCount);

    return 0;
}


// Write a program to find common elements between two arrays.
#include <stdio.h>

int main() {
    int n1, n2, i, j;

    
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter %d elements for first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter %d elements for second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }


    printf("\nCommon elements are:\n");
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break; 
            }
        }
    }

    printf("\n");

    return 0;
}



