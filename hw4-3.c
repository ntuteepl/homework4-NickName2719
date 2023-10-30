#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ( ) {

    int driver[100] = {0};
    int schedule[100][3] = {0};
    int input1, input2;
    int schedule_count = 0;
    int driver_count = 0;

    while(scanf("%d%d", &input1, &input2) != EOF){
        schedule[schedule_count][0] = input1;
        schedule[schedule_count][1] = input2;
        schedule[schedule_count][2] = -1;
        schedule_count++;
    }

    for(int i = 0; i < 24; i++){
        for(int j = 0; j < schedule_count; j++){
            if(schedule[j][2] != (-1) && schedule[j][1] == i) driver[schedule[j][2]] = 0;
        }

        for(int k = 0; k < schedule_count; k++){
            if(schedule[k][2] == (-1) && schedule[k][0] == i){
                for(int m = 0; m < 100; m++){
                    if(driver[m] == 0){
                        schedule[k][2] = m;
                        driver[m] = 1;
                        driver_count = (m > driver_count)? m : driver_count;
                        break;
                    }
                }
            }
        }
    }

    printf("%d\n", (driver_count + 1));

    for(int n = 0; n <= driver_count; n++){
        printf("Driver %d's schedule is", n + 1);
        for(int o = 0; o < schedule_count; o++){
             if(schedule[o][2] == n) {
                    printf(" %d %d", schedule[o][0], schedule[o][1]);
            }
        }
        printf("\n");
    }

    return 0;
}

