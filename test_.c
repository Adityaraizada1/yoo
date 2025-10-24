#include <stdio.h>

int main() {
    int a[50], b[50], m[100];
    int n1, n2, i, j, k = 0;
    int *p1, *p2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements: ");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements: ");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    p1 = a;
    p2 = b;

    // Copy first array
    for(i = 0; i < n1; i++)
        m[k++] = *(p1 + i);

    // Copy second array without duplicate
    for(i = 0; i < n2; i++) {
        for(j = 0; j < k; j++) {
            if(*(p2 + i) == m[j])
                break;
        }
        if(j == k)
            m[k++] = *(p2 + i);
    }

    printf("\nMerged array (no duplicates): ");
    for(i = 0; i < k; i++)
        printf("%d ", m[i]);

    return 0;
}