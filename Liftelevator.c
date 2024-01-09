#include <stdio.h>

int main() {
    int currentFloor = 1;
    int choice;

    do {
        printf("\nElevator Simulation Menu:\n");
        printf("1. Move Up\n");
        printf("2. Move Down\n");
        printf("3. Display Current Floor\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (currentFloor < 10) 
                {
                    currentFloor++;
                    printf("Elevator moved up to floor %d\n", currentFloor);
                } 
                else
                {
                    printf("Elevator is already at the top floor\n");
                }
                break; 
            case 2:
                if (currentFloor > 1) 
                {
                    currentFloor--;
                    printf("Elevator moved down to floor %d\n", currentFloor);
                }
                 else 
                {
                    printf("Elevator is already at the ground floor\n");
                }
                break;
            case 3:
                printf("Elevator is currently on floor %d\n", currentFloor);
                break;
            case 4:
                printf("Exiting elevator simulation. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please choose a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}

