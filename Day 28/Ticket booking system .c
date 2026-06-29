#include <stdio.h>

struct Ticket {
    int id;
    char name[50];
    int seats;
};

int main() {
    struct Ticket t;
    printf("Enter ticket id, passenger name, number of seats: ");
    scanf("%d %s %d", &t.id, t.name, &t.seats);

    printf("\nTicket Details:\n");
    printf("ID: %d, Name: %s, Seats: %d\n", t.id, t.name, t.seats);
    printf("Booking Confirmed!\n");
    return 0;
}