#include <stdio.h>
#include <stdbool.h>

bool canJump(int nums[], int n) {
    int maxreach = 0;

    for (int i = 0; i < n; i++) {
        if (i > maxreach) {
            return false;
        }

        int currentReach = i + nums[i];

        if (currentReach > maxreach) {
            maxreach = currentReach;
        }

        if (maxreach >= n - 1) {
            return true;
        }
    }

    return true;
}

int main() {
    int nums[] = {2, 3, 1, 1, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    if (canJump(nums, n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}