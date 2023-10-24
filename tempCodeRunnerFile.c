#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int originalDays = M1 * D;
        int newDays = originalDays / (M1 + M2);

        if (originalDays % (M1 + M2) != 0) {
            newDays++;
        }

        int daysSaved = D - newDays;
        printf("%d\n", daysSaved);
    }

    return 0;
}
