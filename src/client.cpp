#include <iostream>
#include<stdlib.h>
#include<string.h>    //strlen
#include<sys/socket.h>
#include<arpa/inet.h>    //inet_addr

using namespace std;

int main(int argc , char *argv[])
{
    
    int socket_desc;
    struct sockaddr_in server;
    char *message, server_reply[500], server_reply2[500], server_reply3[500];
    int port = atoi(argv[1]);
    
    //Create socket
    socket_desc = socket(AF_INET , SOCK_STREAM , 0);
    if (socket_desc == -1)
    {
        cout << "Could not create socket";
    }
        
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_family = AF_INET;
    server.sin_port = htons( port );

    //Connect to remote server
    if (connect(socket_desc , (struct sockaddr *)&server , sizeof(server)) < 0)
    {
        puts("connect error");
        return 1;
    }
    
    puts("Connected\n");

    if( recv(socket_desc, server_reply , 2000 , 0) < 0){
        puts("recv failed");
    }
    puts("Reply received\n");
    puts(server_reply);

    
    
    if( recv(socket_desc, server_reply2 , 2000 , 0) < 0){
        puts("recv failed");
    }
    puts("Reply2 received\n");
    puts(server_reply2);
    
    char buff[15000];
    scanf("%199[^\n]",buff);
    message = buff;
        if( send(socket_desc , message , strlen(message) , 0) < 0)
        {
            puts("Send failed");
            return 1;
        }
        if( recv(socket_desc, server_reply3 , 2000 , 0) < 0)
        {
            puts("recv failed");
        }
        puts("Reply3 received\n");
        puts(server_reply3);

    return 0;
}