#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

#define SOCKET = 6667;

bool execute(query){
	int sockfd, porno, n;
	struct sockaddr_in server_addr;
	struct hostent *server;

	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if(sockfd < 0)
		return 0;
	bzero((char *) &server_addr, sizeof(server_addr));
	serv_addr.sin_port = htons(porno);
	if (connect(sockfd,(struct sockaddr *)&serv_addr,sizeof(serv_addr)) < 0) 
		return 0;
	n = write(sockfd, query, strlen(query));
	if(n < 0)
		return 0;
	return 1;
}

bool sendMessage(String recipient, String message){
	query = strcat("PRIVMSG ");
	query = "PRIVMSG ";
	strcat(query, " ");
	strcat(query, message);
	if(!execute(query))
		return 0;
	return 1;
}

bool connect(string channel, string nickname, string username, string password = NULL){
	String query = NULL;
	if(password){
		query = "PASS ";
		strcat(query, password);
		if(!execute(query))
			return 0;
	}

	query = "NICK ";
	strcat(query, nickname);
	if(!execute(query))
		return 0;

	query = "USER ";
	strcat(query, nickname);
	if(!execute(query))
		return 0;
	return 1;
}

bool disconnect(){

}

int main(int argc, char **argv){
	/*
		connect(channel, nickname, username, password);
		sendMessage(recipient, message);
		disconnect();
	*/
}