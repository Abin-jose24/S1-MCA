#include <stdio.h>
#define MAX_SIZE 100
int set1[MAX_SIZE], set2[MAX_SIZE];
int result[MAX_SIZE * 2]; // The result set can contain up to twice the maximum size
int main() {
    int n1, n2, i, j;    
    printf("Enter the number of elements in Set 1: ");
    scanf("%d", &n1);
    printf("Enter the elements of Set 1:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &set1[i]);
    }    
    printf("Enter the number of elements in Set 2: ");
    scanf("%d", &n2);
    printf("Enter the elements of Set 2:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &set2[i]);
    }    
    int choice;
    while(1)
    {
    printf("\nOperations:\n");
    printf("1. Intersection\n");
    printf("2. Union\n");
    printf("3. Difference (Set 1 - Set 2)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);    
    int resultSize = 0;   
    switch (choice) {
        case 1: // Intersection
            for (i = 0; i < n1; i++) {
                for (j = 0; j < n2; j++) {
                    if (set1[i] == set2[j]) {
                        result[resultSize++] = set1[i];
                        break; // No need to continue checking the rest of Set 2
                    }
                }
            }
            break;            
        case 2: // Union
            for (i = 0; i < n1; i++) {
                result[resultSize++] = set1[i];
            }
            for (i = 0; i < n2; i++) {
                int isDuplicate = 0;
                for (j = 0; j < resultSize; j++) {
                    if (set2[i] == result[j]) {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (!isDuplicate) {
                    result[resultSize++] = set2[i];
                }
            }
            break;
        case 3: // Difference (Set 1 - Set 2)
            for (i = 0; i < n1; i++) {
                int isPresentInSet2 = 0;
                for (j = 0; j < n2; j++) {
                    if (set1[i] == set2[j]) {
                        isPresentInSet2 = 1;
                        break;
                    }
                }
                if (!isPresentInSet2) {
                    result[resultSize++] = set1[i];
                }
            }
            break;            
        default:
            printf("Invalid choice.\n");
            return 1;
    }
    printf("Result set: ");
    for (i = 0; i < resultSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    } 
    return 0;
}
