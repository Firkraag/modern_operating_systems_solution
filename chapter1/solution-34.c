#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <sys/wait.h>


#define TRUE 1
#define MAX_SIZE 65400
/* 
Write a shell that is similar to Fig. 1-19 but contains enough code that it actually works so you can test it. You might also add some features such as redirection of input and output, pipes, and background jobs.
*/
void type_prompt()
{
    printf("> ");
}


void parse_command(char *buffer, char **command, char **parameters)
{
    char *pos = buffer;
    char c;
    char *start;
    int first = 1;
    char **parameter = parameters;
    while (1) {
        while (isspace(c = *pos))
            pos++;
        start = pos;
        /*printf("start %c\n", *start);*/
        while ((c = *pos) != '\0' && !isspace(c))
        {
            pos++;
        }
        if ( pos - start <= 0) {
            break;
        }
        else if ( first ) {
            *command = start;
            first = 0;
            *parameter++ = start;
            *pos++ = '\0';
            printf("parse command: %s\n", *command);
        }
        else {
            *parameter = start;
            *pos++ = '\0';
            printf("parse parameter: %s\n", *parameter++);
        }
        if ( c == '\0')
        {
            break;
        }
    }
    *parameter = NULL;
}

int readline(char *buffer, int size) {
    char c;
    char *pos = buffer;
    while ((c = getchar()) != EOF && c != '\n')
    {
        *pos++ = c;
    }
    *pos = '\0';
    return c;
}
    
void read_command(char *buffer, char **command, char **parameters) {
    int i;
    readline(buffer, MAX_SIZE);
    printf("buffer is %s.\n", buffer);
    parse_command(buffer, command, parameters); 
}

int main() {
    while (TRUE) {
        char buffer[MAX_SIZE];
        char *command;
        char *parameters[50];
        char **parameter = parameters;
        int status;
        type_prompt();
        read_command(buffer, &command, parameters);
        printf("command is %s\n", command);
        while (*parameter != NULL)
        {
            printf("parameter is %s\n", *parameter);
            parameter++;
        }
        

        if (fork() != 0) {
            waitpid(-1, &status, 0);
        }
        else {
            execve(command, parameters, NULL);
        }
    }
}
