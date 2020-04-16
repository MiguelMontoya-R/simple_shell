# simple_shell

This is our own simple version of the dash shell.

## Getting Started

Clone this repository to get all the files you need to run this basic version of dash shell on your machine. Each part needed to make hsh shell works are in various files, so you can connect and trace all the functions so you can make changes or makes upgrades connecting other more advanced functions.

### Prerequisites

This project was made and tested using Ubuntu 14.04.3 LTS and compiled with gcc 4.8.4. We strongly encourage you to test this hsh command shell under this conditions.

### Tested commands

Commands are a mostly built-in that can be executed within this shell. The commands however have its own way of being executed correctly with given arguments.
The commands follow this basic prototype: [COMMAND] [ARGUMENTS]
List of supported commands:

| Command | Description  |
|--------|--------|
| ls -[ARGUMENTS] | List files and directoris within the current directory |
| pwd    | Print current working directory's path |
| cd [ABSOLUTE_PATH] | Change directory |
| env    | Print the enviroment |
| exit   | Exit the hsh simple shell. Note that this exit just only exit from this shell.

### Examples

cisfun$ ls -la\
drwxrwxr-x 4 vagrant vagrant  4096 Apr 16 15:44 ._
drwxrwxr-x 4 vagrant vagrant  4096 Apr 14 22:00 .._
-rwxrwxrwx 1 vagrant vagrant   333 Apr 15 21:14 a.sh_
-rw-rw-r-- 1 vagrant vagrant   490 Apr 14 22:00 _atoi.c_
-rw-rw-r-- 1 vagrant vagrant   296 Apr 15 21:14 AUTHORS_
-rw-rw-r-- 1 vagrant vagrant   404 Apr 15 16:19 cd_function.c_
-rw-rw-r-- 1 vagrant vagrant   673 Apr 16 00:33 _commands.c_
-rw-rw-r-- 1 vagrant vagrant   726 Apr 16 00:33 _find_path.c_
-rw-rw-r-- 1 vagrant vagrant   374 Apr 15 16:22 _getenv.c_
drwxrwxr-x 8 vagrant vagrant  4096 Apr 16 15:42 .git_
-rw-rw-r-- 1 vagrant vagrant   833 Apr 16 00:33 holberton.h_
-rwxrwxr-x 1 vagrant vagrant 14055 Apr 15 16:38 hsh_
-rw-rw-r-- 1 vagrant vagrant  1986 Apr 16 15:09 man_1_simple_shell_
-rw-rw-r-- 1 vagrant vagrant   482 Apr 15 20:32 path.c_
-rw-rw-r-- 1 vagrant vagrant   249 Apr 16 00:33 _print_env.c_
cisfun$ exit_
vagrant@vagrant-ubuntu-trusty-64:~/$

## Return Value

Returns: Return the execution of the given command from the terminal by the user and exit with status zero. Or in case of some error it will display in STDERR and give a number status different of zero

## Built With

* Ubuntu 14.04.3 LTS
* gcc 4.8.4
* GNU Emacs 24.3.1
* GDB Debugger

## Authors

* **Miguel Montoya Ramírez** - *Initial work* - [GitHub](https://github.com/MiguelMontoya-R)
* **Cristian Pineda** - *Initial work* - [GitHub](https://github.com/Cristiand187)

## License

Opensource Project.

## Acknowledgments

* Project made at Holberton School - Medellín, Colombia.