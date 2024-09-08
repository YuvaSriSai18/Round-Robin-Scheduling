# Round Robin Scheduling

## Overview

The Round Robin Scheduling algorithm is a CPU scheduling technique that allocates a fixed time slice (quantum) to each process in a cyclic order. It ensures fair distribution of CPU time among processes by providing each process an equal opportunity to execute.

## Features

- **Fixed Time Quantum:** Each process gets a fixed time slice to execute.
- **Fairness:** Ensures that all processes receive an equal amount of CPU time.
- **Simplicity:** Easy to implement and understand.

## Getting Started

### Prerequisites

- **Programming Language:** C
- **Compiler:** Any standard C compiler (e.g., GCC)

### Installation

1. Clone the repository to your local machine:

    ```bash
    git clone https://github.com/yuvasrisai18/round-robin-scheduling.git
    cd round-robin-scheduling
    ```

2. Compile the C program:

    ```bash
    gcc round_robin_scheduling.c -o round_robin_scheduling
    ```

### Usage

1. Run the compiled program:

    ```bash
    ./round_robin_scheduling
    ```

2. Follow the prompts to input the number of processes, their arrival and burst times, and the time quantum.

3. The program will output the process details, including burst time, turnaround time (TAT), and waiting time. It will also display the average waiting time and turnaround time.

## Code Explanation

- **Initialization:** Variables are initialized to store process details, timing information, and computation results.
- **Input:** Prompts the user for the number of processes, their arrival and burst times, and the time quantum.
- **Processing:** Uses a loop to simulate the Round Robin scheduling and calculates waiting and turnaround times.
- **Output:** Displays the results and average times.

## Acknowledgements

- Based on classic CPU scheduling algorithms and operating systems concepts.

