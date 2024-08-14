#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdbool.h>

#define TRANSIT_TIME 2

void get_time(char buffer[],int buffer_size){
    time_t raw_time;
    struct tm *time_info;

    time(&raw_time);
    time_info = localtime(&raw_time);

    strftime(buffer,buffer_size,"%Y-%m-%d %H:%M:%S",time_info);
}

void send_frame(int frame){
    sleep(TRANSIT_TIME);
    char time_str[20];
    get_time(time_str,sizeof(time_str));
    printf("\n[%s] Sending frame:%d",time_str,frame);
}

bool receive_ack(int frame){
    sleep(TRANSIT_TIME);
    char time_str[20];
    get_time(time_str,sizeof(time_str));
    printf("\n[%s] Acknowledgement received from frame:%d\n",time_str,frame);
    return true;
}

int main(){
    int frame_to_send = 1;
    int f;

    printf("Enter the number of frames:");
    scanf("%d",&f);    
    for(int i = 1 ; i <= f ; i++){
        send_frame(frame_to_send);
        sleep(TRANSIT_TIME);
        bool ack_received = receive_ack(frame_to_send);

        if(ack_received){
            frame_to_send++;
        }else{
            printf("Resending frame:%d\n",frame_to_send);
        }
    }
    return 0;
}
