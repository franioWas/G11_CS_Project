#include <stdio.h>
#include <comm.h>
#include <client.h>
#include <server.h>


int main (int argc, char *argv[]) {
	if (argc >= 2) {
		printf("too many arguments");
		exit(1);
	}
	if (argc == 1) {
		client(argv[1]);
	else server();
	return 0;
}
