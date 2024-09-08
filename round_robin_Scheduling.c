#include <stdio.h>

int main() {
    // Initialize the variables
    int i, NOP, sum = 0, count = 0, y, quant, wt = 0, tat = 0;
    int at[10], bt[10], temp[10];
    float avg_wt, avg_tat;

    // Input the number of processes
    printf("Total number of processes in the system: ");
    scanf("%d", &NOP);
    y = NOP; // Assign the number of processes to variable y

    // Input arrival and burst times
    for (i = 0; i < NOP; i++) {
        printf("\nEnter the Arrival and Burst time of process[%d]\n", i + 1);
        printf("Arrival time: ");
        scanf("%d", &at[i]);
        printf("Burst time: ");
        scanf("%d", &bt[i]);
        temp[i] = bt[i]; // Store the burst time in temp array
    }

    // Input time quantum
    printf("Enter the Time Quantum for the processes: ");
    scanf("%d", &quant);

    // Display process details
    printf("\nProcess No\tBurst Time\tTAT\tWaiting Time");

    for (sum = 0, i = 0; y != 0;) {
        if (temp[i] <= quant && temp[i] > 0) {
            sum = sum + temp[i];
            temp[i] = 0;
            count = 1;
        } else if (temp[i] > 0) {
            temp[i] = temp[i] - quant;
            sum = sum + quant;
        }
        if (temp[i] == 0 && count == 1) {
            y--; // Decrement the process count
            printf("\nProcess No[%d]\t%d\t\t%d\t\t%d", i + 1, bt[i], sum - at[i], sum - at[i] - bt[i]);
            wt = wt + sum - at[i] - bt[i];
            tat = tat + sum - at[i];
            count = 0;
        }
        if (i == NOP - 1) {
            i = 0;
        } else if (at[i + 1] <= sum) {
            i++;
        } else {
            i = 0;
        }
    }

    // Calculate and display average waiting time and turnaround time
    avg_wt = (float)wt / NOP;
    avg_tat = (float)tat / NOP;
    printf("\nAverage Turnaround Time: %.2f", avg_tat);
    printf("\nAverage Waiting Time: %.2f", avg_wt);

    return 0;
}
