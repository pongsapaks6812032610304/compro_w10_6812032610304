#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int scores[n];
    int sum = 0;

    printf("Enter %d student scores (one per line):\n", n);
    for (int i = 0; i < n; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    float average = (float)sum / n;
    printf("\nNumber of students = %d\n", n);
    printf("Average score = %.2f\n", average);

    return 0;
}
