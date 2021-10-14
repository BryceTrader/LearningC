#include <stdio.h>
#include <string.h>

char* findDay(int x) {
    switch(x) {
        case 0:
            return "Monday";
        case 1:
            return "Tuesday";
        case 2:
            return "Wednesday";
        case 3:
            return "Thursday";
        case 4:
            return "Friday";
        case 5:
            return "Saturday";
        case 6:
            return "Sunday";
        default:
            return "Error";
    }
}

int main() {
    typedef enum {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday} WeekDay_E;
    WeekDay_E today = 0;
    WeekDay_E tomorrow = 1;
    
    for(int i = 0; i < 30; i++) {
        char day[10]; 
        strcpy(day, findDay(today));
        printf("Today is %s\n", day);
        
        if(today <= Sunday) {
            today = tomorrow;
            tomorrow++;
            if(tomorrow > Sunday)
                tomorrow = Monday;
        }
    }
    return 0;
}