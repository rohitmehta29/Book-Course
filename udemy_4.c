#include <stdio.h>


enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    
    enum Day today, tomorrow;

    today = MONDAY;
    tomorrow = TUESDAY;

    printf("Today (enum value): %d\n", today);
    printf("Tomorrow (enum value): %d\n", tomorrow);

    return 0;
}