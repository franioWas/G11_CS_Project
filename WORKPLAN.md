# Work Plan

## Main Stages for Base Project Completion
1. Create core functions which allow the program to accept connection requests, send connection requests, send text data,
and allow the user to interface with the program through basic text commands. In other words, create a basic peer to peer
local network chat client.
2. Create a more advanced system for managing chats and sending text. Maybe store chat data in files instead of a large memory
buffer. By doing this modularity can also be increased, as what actually parses the data in the file can be made a module. 
2. Create a "network awareness" capability. This means that the program will have a mechanism which will
allow other running programs to see that the user is online and able to revieve connection requests, 
and the program itself is able to make itself "known" to other peers in the network. I believe i'll do this by making the program broadcast UDP packets across the network.
3. Develop a "terminal" user interface similair to the nmtui interface for network-manager. The program will now have this tui (terminal user interface), and the cui (command user interface).
### Stretch Goals (features not neccasary for the base project)
4. STRETCH-GOAL: allow the program to have the ability to make servers on the network, in which one person hosts and multiple people may connect to the server. This should be implemented as a module, so people can still have the basic chat function without the code to also allow servers
5. STRETCH-GOAL: develop a gui, which like stage 4 is implemented as a module.
6. STRETCH-GOAL: maybe allow public chats i dunno.

## Daily Goals
### May 21: 
1. get work plan file complete -- PARTIAL FAIL
2. learn basics of git -- PARTIAL FAIL
3. allow template code to use address's other then the loop back -- FAIL
### May 22:
1. finish what was goal 1 on May 21 -- SUCCESS
2. finish what was goal 2 on May 21 -- SUCCESS
3. finish what was goal 3 on May 21 -- SUCCESS
### May 23:
1. allow both client and server to send custom messages -- FAIL
### June 4:
1. finish what was goal 1 on may 23 - PARTIAL SUCCES: CAN SEND A CUSTOM MESSAGE OF UP TO 30 CHARACTERS LONG NOW, BUT DOES NOT FULLY SEND MESSAGES WITH SPACES
### June 5:
1. allow multiple custom messages to be sent. Messages must be able to have spaces.
### June 6:
1. Finish what was goal one for June 5. - PARTIAL SUCCESS: CLIENT MAY SEND MULTIPLE MESSAGES OF MAX LENGTH 30 TO SERVER. THE SERVER IS ABLE TO RECEIVE AND DISPLAY THESE MESSAGES. SERVER CANNOT SEND MESSAGES, CLIENT CANNOT RECEIVE MESSAGES (EVEN IF SERVER WOULD BE ABLE TO SEND MESSAGES).
## General Goals to complete before June 9:
1. make program p2p. This means both the client and server code must be able to be in one program.
2. allow long complex messages to be sent, and try to make the mechanism for interpreting text file based.

