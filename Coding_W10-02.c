#include <stdio.h>

int main() {
    float scores[3][3];
    float sum[3] = {0}, avg[3] = {0};

    for (int i = 0; i < 3; i++) {
        printf("Enter scores for Student %d:\n", i + 1);
        printf("Math: ");
        scanf("%f", &scores[i][0]);
        printf("Physics: ");
        scanf("%f", &scores[i][1]);
        printf("Chemistry: ");
        scanf("%f", &scores[i][2]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[j] += scores[i][j];
        }
    }

    printf("\nScore Table:\n");
    printf("Student\tMath\tPhysics\tChemistry\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\t%.2f\t%.2f\t%.2f\n", i + 1, scores[i][0], scores[i][1], scores[i][2]);
    }

    printf("\nAverage per subject:\n");
    printf("Math: %.2f\n", sum[0] / 3);
    printf("Physics: %.2f\n", sum[1] / 3);
    printf("Chemistry: %.2f\n", sum[2] / 3);

    return 0;
}
