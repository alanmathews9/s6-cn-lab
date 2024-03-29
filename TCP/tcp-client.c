#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>

void main()
{
    int client;
    char buffer[1024];
    struct sockaddr_in servAddr;
    socklen_t addrSize;
    client = socket(AF_INET, SOCK_STREAM, 0);
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(6265);
    servAddr.sinaddr.s_addr = inet_addr("127.0.0.1");
    connect(client, (struct sockaddr *)&servAddr, sizeof(servAddr));
    strcpy(buffer, "Hi this is client\n");
    send(client, buffer, 19, 0);
    recv(client, buffer, 1024, 0);
    printf("4. Data recieved: %s",buffer);
    close(client);
}

// #define MAX 80
// #define PORT 8080
// #define SA struct sockaddr
// void func(int sockfd)
// {
// char buff[MAX];
// int n;
// for (;;) {bzero(buff, sizeof(buff));
// printf("Enter the string : ");
// n = 0;
// while ((buff[n++] = getchar()) != '\n')
// ;
// write(sockfd, buff, sizeof(buff));
// bzero(buff, sizeof(buff));
// read(sockfd, buff, sizeof(buff));
// printf("From Server : %s", buff);
// if ((strncmp(buff, "exit", 4)) == 0) {
// printf("Client Exit...\n");
// break;
// }
// }
// }
// int main()
// {
// int sockfd, connfd;
// struct sockaddr_in servaddr, cli;
// sockfd = socket(AF_INET, SOCK_STREAM, 0);
// if (sockfd == -1) {
// printf("socket creation failed...\n");
// exit(0);
// }
// else
// printf("Socket successfully created..\n");
// bzero(&servaddr, sizeof(servaddr));
// servaddr.sin_family = AF_INET;
// servaddr.sin_addr.s_addr = inet_addr("127.0.0.1");
// servaddr.sin_port = htons(PORT);
// if (connect(sockfd, (SA*)&servaddr, sizeof(servaddr)) != 0) {
// printf("connection with the server failed...\n");
// exit(0);
// }
// else
// printf("connected to the server..\n");
// func(sockfd);
// close(sockfd);
// }