#ifndef lab5_h
#define lab5_h
#include <string.h>
#include <cstring>
#include <string>
//using namespace std;
//int del(string file);
char* err();
const char *help();
char *show_all_files(const char *path);
char *showp();
int copyFile(const char *copyfromfile, const char *copytofile);
int showsize(std::string filesize);
const char *start(char* client_message);

#endif 