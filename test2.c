#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // For sleep function

#define TOTAL_FRAMES // Number of frames to be sent

void sender();
void receiver();

int main()
{

    int n, frame[100];

    printf("Enter the number of frames to send: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d frame data:", i);
        scanf("%s", &frame[i]);
    }

    printf("Starting Stop-and-Wait Protocol Simulation...\n");

    // Simulate sender and receiver
    sender();

    return 0;
}

void sender()
{
    int i, n;
    for (i = 0; i < n; i++)
    {
        printf("Sender: Sending Frame %d\n", i);

        // Simulate sending frame
        sleep(1); // Simulating network delay

        // Wait for acknowledgment
        printf("Sender: Waiting for ACK for Frame %d\n", i);

        // Simulate waiting for ACK from receiver
        receiver();
    }

    printf("Sender: All frames sent successfully.\n");
}

void receiver()
{
    static int ack_received = 0;

    // Simulate receiving frame and sending ACK
    sleep(1); // Simulating network delay

    printf("Receiver: Frame received. Sending ACK.\n");
    ack_received++;

    printf("Receiver: ACK %d sent.\n", ack_received - 1);
}
