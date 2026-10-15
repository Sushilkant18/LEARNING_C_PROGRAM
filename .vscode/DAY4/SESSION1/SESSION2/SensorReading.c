#include <stdio.h>

union Value {
    float temperature;
    char door;
    long pulses;
};

struct Reading {
    int sensorID;
    char kind;
    union Value value;
};

struct AllFields {
    int sensorID;
    char kind;
    float temperature;
    char door;
    long pulses;
};

int main() {
    int N;

    scanf("%d", &N);

    if (N <= 0 || N > 1000) {
        printf("INVALID COUNT\n");
        return 0;
    }

    struct Reading r[N];

    // Read and validate all sensor readings
    for (int i = 0; i < N; i++) {
        scanf("%d %c", &r[i].sensorID, &r[i].kind);

        if (r[i].kind == 'T') {
            scanf("%f", &r[i].value.temperature);
        }
        else if (r[i].kind == 'D') {
            scanf(" %c", &r[i].value.door);
        }
        else if (r[i].kind == 'P') {
            scanf("%ld", &r[i].value.pulses);
        }
        else {
            printf("INVALID KIND\n");
            return 0;
        }
    }

    printf("SENSOR REPORT\n");

    for (int i = 0; i < N; i++) {
        switch (r[i].kind) {
            case 'T':
                printf("Sensor %d temperature %.2f C\n",
                       r[i].sensorID,
                       r[i].value.temperature);
                break;

            case 'D':
                if (r[i].value.door == 'O')
                    printf("Sensor %d door OPEN\n", r[i].sensorID);
                else
                    printf("Sensor %d door CLOSED\n", r[i].sensorID);
                break;

            case 'P':
                printf("Sensor %d pulses %ld\n",
                       r[i].sensorID,
                       r[i].value.pulses);
                break;
        }
    }

    printf("sizeof(union Value): %zu\n", sizeof(union Value));
    printf("sizeof(Reading) with union: %zu\n", sizeof(struct Reading));
    printf("sizeof(Reading) with all fields: %zu\n", sizeof(struct AllFields));

    printf("Bytes saved per record: %zu\n",
           sizeof(struct AllFields) - sizeof(struct Reading));

    return 0;
}