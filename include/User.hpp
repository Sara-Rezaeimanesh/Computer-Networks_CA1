#ifndef USER_HEADER
#define USER_HEADER

#include "IncludeAndDefine.hpp"

class User {
public:
    User(std::string username, std::string pass, std::string isAdminS, std::string datalimitS);
    void printUser();
    bool isValid(std::string username_);
    bool fdMatches(int fd);
    bool login(std::string pass_);
    void updateFd(int fd);
    bool isLoggedIn();
    void logout();
    char* getCurrDir();
    std::string getRelativeDir(std::string path);
    bool updateDir(std::string path);
    bool resetDir();
    bool canDownload(int fileSize);
    void updateDataLimit(int fileSize);
    bool isAdmin();
private:
    std::string username, pass;
    bool admin, loginStatus;
    char currDir[BUFFER_SIZE], originDir[BUFFER_SIZE];
    int datalimit, id;
};

#endif