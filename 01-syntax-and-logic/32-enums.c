#include <stdio.h>

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main(void) {
    enum Day today = TUESDAY;

    printf("Day value: %d\n", today);

    if (today == SUNDAY || today == SATURDAY) {
        printf("Weekend\n");
    } else {
        printf("Weekday\n");
    }

    return 0;
}