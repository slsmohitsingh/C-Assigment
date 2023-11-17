#include<stdio.h>
#include<stdint.h>

int main() 
{
    int8_t i8controlMode;
    double temperatureInput, coolingRange, thermalRange;

    /* Input AC control mode from user */
    printf("Enter AC control mode (0-Manual, 1-Open loop, 2-Closed loop): ");
    scanf("%hhd", &i8controlMode);

    switch (i8controlMode) 
    {
        case 0:
            /* Manual mode */
            printf("Enter Cooling range (20-100): ");
            scanf("%lf", &coolingRange);

           /*  Cooling range is within limits */
           coolingRange = (coolingRange < 20) ? 20 : ((coolingRange > 100) ? 100 : coolingRange);

            printf("Manual mode selected. Cooling range set to %.2lf.\n", coolingRange);
            break;

        case 1:
            /* Open loop mode */
            printf("Enter Temperature input (0-100): ");
            scanf("%lf", &temperatureInput);

            /* Calculate Cooling range using thermal equation */
            coolingRange = 0.0202 * temperatureInput - 0.3345 * temperatureInput + 15.363;

            /* Ensure Cooling range is within limits */
            coolingRange = (coolingRange < 20) ? 20 : ((coolingRange > 100) ? 100 : coolingRange);

            printf("Open loop mode selected. Cooling range calculated to %.2lf.\n", coolingRange);
            break;

        case 2:
            /* Closed loop mode */
            printf("Enter Cooling range (20-100): ");
            scanf("%lf", &coolingRange);

            printf("Enter Temperature input (0-100): ");
            scanf("%lf", &temperatureInput);

            /* Calculate Thermal range using the given table */
            if (temperatureInput >= 0 && temperatureInput <= 25)
            {
                thermalRange = 0.0202 * temperatureInput - 0.3345 * temperatureInput + 15.363;
            } else if (temperatureInput >= 26 && temperatureInput <= 50) 
            {
                thermalRange = 80;
            } else if (temperatureInput >= 51 && temperatureInput <= 75)
            {
                thermalRange = 0.0202 * temperatureInput - 0.3345 * temperatureInput + 45.363;
            } else if (temperatureInput >= 76 && temperatureInput <= 100) 
            {
                thermalRange = 100;
            } 
            else
            {
                thermalRange = 0;  /* Default value for invalid temperature input*/
            }

            /* Find the maximum of Cooling range, Thermal range, and Minimum Cooling range */
            coolingRange = (coolingRange < 20) ? 20 : ((coolingRange > 100) ? 100 : coolingRange);
            coolingRange = (coolingRange > thermalRange) ? coolingRange : thermalRange;

            printf("Closed loop mode selected. Cooling range set to %.2lf.\n", coolingRange);
            break;

        default:
            printf("Invalid AC control mode selected.\n");
            break;
    }

    return 0;
}
