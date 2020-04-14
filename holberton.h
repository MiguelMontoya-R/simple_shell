#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#define max_args 13

void strtok_args(char *arg, char **args);

void strtok_cmd(char *arg, char **cmd);

void command(char *p, char **args, char **env);

char *Path_find(char *arg);

short file_exists(char *filename);

void cd_function(char **args);

int create_file(const char *filename, char *text_content);

int _atoi(char *s);

int _strcmp(char *s1, char *s2);

void exit_function(char *arg);

#endif
