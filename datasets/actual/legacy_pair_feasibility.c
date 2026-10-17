#include <stdio.h>
#include <stdlib.h>

#define MAX_VALUES 20000

static int values[MAX_VALUES];

/* Sort the first sequence from largest to smallest. */
int compare_descending(const void *left, const void *right) {
    int left_value = *(const int *)left;
    int right_value = *(const int *)right;

    if (left_value < right_value) {
        return 1;
    }

    if (left_value > right_value) {
        return -1;
    }

    return 0;
}

int main(void) {
    int count;

    while (scanf("%d", &count) == 1 && count != 0) {
        int total_values = count * 2;
        int feasible = 1;

        if (count < 0 || total_values > MAX_VALUES) {
            printf("Invalid item count.\n");
            return 1;
        }

        for (int i = 0; i < total_values; i++) {
            scanf("%d", &values[i]);
        }

        qsort(values, count, sizeof(values[0]), compare_descending);

        for (int i = 0; i < count; i++) {
            for (int j = 0; j < count; j++) {
                if (values[count + j] > 0) {
                    values[i] = values[i] - 1;
                    values[count + j] = values[count + j] - 1;
                }
            }

            if (values[i] != 0) {
                feasible = 0;
                break;
            }
        }

        if (feasible == 1) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
