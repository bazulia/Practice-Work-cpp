#include <iostream>

using namespace std;

int main()
{
    const int startOfWorkDay = 9;
    const int endOfWorkDay = 17;
    int currentHour = 0;
    int hoursToEndOfWorkOfDay = 0;

    printf("Enter current hour (%d - %d) : ",startOfWorkDay, endOfWorkDay);

    scanf("%d", &currentHour);

    switch(currentHour){
        case 9:case 10: case 11: case 12:
        case 13: case 14: case 15: case 16:
        case 17: hoursToEndOfWorkOfDay = endOfWorkDay - currentHour;
            printf ("Hour(s) to end of work day: %d", hoursToEndOfWorkOfDay);
            break;
        default:
            printf ("Please enter valid hour of work day (%d - %d)", startOfWorkDay, endOfWorkDay);
            break;
    }

    return 0;
}
