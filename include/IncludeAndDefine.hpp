#ifndef DEFINE_HEADER
#define DEFINE_HEADER

#include <bits/stdc++.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/time.h>
#include <dirent.h>
#include <cstdio>

#define BUFFER_SIZE 1024
#define LOG_FILE_NAME "/configuration/log.txt"
#define SUCCESSFUL_QUIT "221: Successful Quit."
#define CANT_OPEN_DATA_CONNECTION "425: Can't open data connection."
#define SYNTAX_ERROR "501: Syntax error in parameters or arguments."
#define SUCCESSFUL_DOWNLOAD "226: Successful Download."
#define SUCCESSFUL_CHANGE "250: Successful change."
#define ERROR "500: Error"
#define LIST_TRANSFER_DONE "226: List transfer done."
#define FILE_UNAVAILABLE "550: File unavailable."
#define NEED_TO_LOGOUT "430: You need to log out first."
#define USERNAME_OK "331: User name ok, need password."
#define ALREADY_LOGGED_IN "430: User already logged in."
#define INVALID_LOGIN "430: Invalid username or password."
#define SUCCESSFUL_LOGIN "230: User logged in, proceed. Log out if appropriate."
#define BAD_SEQUENCE "503: Bad sequence of commands."
#define SHOULD_LOGIN "332: Need account for login."

#define USER_COMMAND "user"
#define PASS_COMMAND "pass"
#define PWD_COMMAND "pwd"
#define MKD_COMMAND "mkd"
#define DELE_COMMAND "dele"
#define LS_COMMAND "ls"
#define CWD_COMMAND "cwd"
#define RENAME_COMMAND "rename"
#define RETR_COMMAND "retr"
#define HELP_COMMAND "help"
#define QUIT_COMMAND "quit"

#define CONFIG_FILE "configuration/config.json"
#define COMMAND_CHANNEL_PORT "commandChannelPort"
#define DATA_CHANNEL_PORT "dataChannelPort"
#define CONFIG_ADMIN_FILES "files"
#define CONFIG_USER "user"
#define CONFIG_PASSWORD "password"
#define CONFIG_IS_ADMIN "admin"
#define CONFIG_SIZE "size"


#endif