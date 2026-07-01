#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    for(int i = 1; i <= 10; i++) {
        int moisture = rand() % 100;
        printf("\nReading %d\n", i);
        printf("Moisture Level: %d%%\n", moisture);
        if(moisture < 30) {
            printf("Status: Soil is DRY \n");
            printf("Action: Turn ON Water Pump\n");
        } else {
            printf("Status: Soil is WET \n");
            printf("Action: No Water Needed\n");
        }
        printf("-----------------------------\n");
    }
    return 0;
}
