
#include <stdio.h>

int eatingSpeed(int bunches[], int size, int h) {
    int left = 1;
    int right = 0;

    for (int i = 0; i < size; i++) {
        if (bunches[i] > right) {
            right = bunches[i];
        }
    }

    int speed = right;

    while (left < right) {
        int mid = left + (right - left) / 2;
        int totalhours = 0;

        for (int i = 0; i < size; i++) {
            totalhours += (bunches[i] + mid - 1) / mid;
        }

        if (totalhours <= h) {
            speed = mid;
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}

int main() {
    int bunches[] = {3, 6, 7, 11};
    int h = 8;

    int n = sizeof(bunches) / sizeof(bunches[0]);

    int result = eatingSpeed(bunches, n, h);

    printf("Minimum eating speed = %d\n", result);

    return 0;
}
