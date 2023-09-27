// 1.Program to find the sum of elements in an array:

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("Sum of elements: %d\n", sum);
    return 0;
}

// 2.Program to find the largest element in an array:

#include <stdio.h>

int main() {
    int arr[] = {12, 45, 78, 23, 56};
    int max = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest element: %d\n", max);
    return 0;
}

// 3.Program to find the smallest element in an array:

#include <stdio.h>

int main() {
    int arr[] = {12, 45, 78, 23, 56};
    int min = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Smallest element: %d\n", min);
    return 0;
}

// 4. Program to reverse an array:

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// 5. Program to find the average of elements in an array:

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    float average = (float)sum / n;
    printf("Average: %.2f\n", average);
    return 0;
}

// 6. Program to count the number of even and odd elements in an array:

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Even elements: %d\n", evenCount);
    printf("Odd elements: %d\n", oddCount);
    return 0;
}

// 7. Program to copy one array to another:

#include <stdio.h>

int main() {
    int source[] = {1, 2, 3, 4, 5};
    int destination[5];
    int n = 5;

    for (int i = 0; i < n; i++) {
        destination[i] = source[i];
    }

    printf("Copied array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }

    return 0;
}

// 8. Program to find the frequency of a given element in an array:

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = 7;
    int searchElement = 2;
    int frequency = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            frequency++;
        }
    }

    printf("Frequency of %d: %d\n", searchElement, frequency);
    return 0;
}

// 9. Program to find the second largest element in an array:

#include <stdio.h>

int main() {
    int arr[] = {12, 45, 78, 23, 56};
    int n = 5;
    int firstMax = arr[0], secondMax = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }

    printf("Second largest element: %d\n", secondMax);
    return 0;
}

// 10. Program to merge two arrays into a third array:

#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int n1 = 3, n2 = 3;
    int merged[6];
    int n3 = n1 + n2;

    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < n3; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}

// 11. Program to remove duplicates from an array:

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7;
    int unique[7];
    int newSize = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unique[newSize] = arr[i];
            newSize++;
        }
    }

    printf("Array with duplicates removed: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}

// 12. Program to check if an array is sorted in ascending order:

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int isSorted = 1;  // Assume the array is sorted

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            isSorted = 0;  // Not sorted
            break;
        }
    }

    if (isSorted) {
        printf("The array is sorted in ascending order.\n");
    } else {
        printf("The array is not sorted in ascending order.\n");
    }

    return 0;
}

// 13. Program to find the intersection of two arrays:

#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int n1 = 5, n2 = 5;
    int intersection[5];
    int count = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                intersection[count++] = arr1[i];
                break;
            }
        }
    }

    printf("Intersection of arrays: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", intersection[i]);
    }

    return 0;
}

// 14. Program to find the union of two arrays:

#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int n1 = 5, n2 = 5;
    int unionArray[10];
    int count = 0;

    // Add elements from the first array to the unionArray
    for (int i = 0; i < n1; i++) {
        unionArray[count++] = arr1[i];
    }

    // Add elements from the second array to the unionArray if they are not already present
    for (int i = 0; i < n2; i++) {
        int isAlreadyPresent = 0;
        for (int j = 0; j < count; j++) {
            if (arr2[i] == unionArray[j]) {
                isAlreadyPresent = 1;
                break;
            }
        }
        if (!isAlreadyPresent) {
            unionArray[count++] = arr2[i];
        }
    }

    printf("Union of arrays: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", unionArray[i]);
    }

    return 0;
}

// 15. Program to find the difference between two arrays:

#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int n1 = 5, n2 = 5;
    int difference[5];
    int count = 0;

    // Find elements that are in arr1 but not in arr2
    for (int i = 0; i < n1; i++) {
        int isNotInArr2 = 1;
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                isNotInArr2 = 0;
                break;
            }
        }
        if (isNotInArr2) {
            difference[count++] = arr1[i];
        }
    }

    printf("Difference of arrays: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", difference[i]);
    }

    return 0;
}

// 16. Program to rotate an array to the right by a given number of positions:

#include <stdio.h>

void rightRotate(int arr[], int n, int k) {
    int temp[k];

    // Copy the last k elements to a temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the remaining elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy the temporary array back to the original array
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2; // Number of positions to rotate

    rightRotate(arr, n, k);

    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// 17. Program to find the sum of two matrices:

#include <stdio.h>

int main() {
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];
    int rows = 2, cols = 2;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// 18. Program to find the product of two matrices:

#include <stdio.h>

int main() {
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];
    int rows = 2, cols = 2;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Product of matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// 19. Program to find the transpose of a matrix:

#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transpose[3][3];
    int rows = 3, cols = 3;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    printf("Transpose of matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// 20. Program to perform a linear search in an array:

#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index of the key if found
        }
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key = 30;

    int index = linearSearch(arr, n, key);

    if (index != -1) {
        printf("Element %d found at index %d\n", key, index);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
