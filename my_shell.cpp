// Course: Course Name <Winter 2014>
//
// First Name: Alex
// Last Name: Feinland
// CS Login: afein001
// UCR email: afein001@ucr.edu
// SID: 861056485
//
// Lecture Section: <100>
// Lab Section: <21>
// TA: Bryan Marsh
//
// Assignment <HW4>
//
// I hereby certify that the code in this file 
// is ENTIRELY my own original work.

#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <csignal>
#include <cerrno>

using namespace std;

void printP rompt()
{
    cout << "\nmy_shell% " << flush;
}

void childReaper(int sig)
{
    int status;
    signal(SIGCHLD, childReaper);
    while( waitpid(-1, &status, WNOHANG) >= 0 )
        continue;
}

void parse_input(int & argc, char *buf, char *argv[])
{
    while(*buf != 0)
    {
        while(*buf == ' ' || *buf == '\t')
            *buf++ = '\0';
        *argv++ = buf;
        argc++;
        while(*buf != '\0' && *buf != ' ' && *buf != '\t')
            buf++;
    }
    *argv = 0;
}




//test: tee outfile < infile - dup infile with stdin, b/c "<infile"
void testexec()
{
    char * argv[64];
    char * infile = "infile.txt";
    argv[0] = "tee";
    argv[1] = "outfile";
    argv[2] = NULL;
    int fd_in;
    if( (fd_in = open(infile, O_RDONLY, S_IRUSR)) == -1 )
        cout << "Error opening input file: " << errno << endl;

    cout << "fd_in: " << fd_in << endl;
    if( dup2(fd_in, 0)  ==  -1 )
        cout << "Error dup2(fd_in, 0) " << errno << endl;
    cout << "fd_in: " << fd_in << endl;
    close(fd_in);
    cout << "fd_in: " << fd_in << endl;

    execvp(argv[0], argv);
}

// test: tee outfile < infile > outfile
//      dup infile with stdin b/c "<infile"
//      dub outilfe with stdout b/c ">outifle"
void testexec2()
{
    char * argv[64];
    char * infile = "infile.txt";
    char * outfile = "outfile";
    argv[0] = "tee";
    argv[1] = "outfile";
    argv[2] = NULL;

    int fd_in, fd_out;
    if( (fd_in = open(infile, O_RDONLY, S_IRUSR)) == -1 )
        cout << "Error opening input file: " << errno << endl;
    if( (fd_out = open(outfile, O_WRONLY, S_IWUSR)) == -1 )
        cout << "Error opening output file: " << errno << endl;

    if( dup2(fd_in, 0) == -1 )
        cout << "Error dup2(fd_in, 0) " << errno << endl;

    if( dup2(fd_out, 1) == -1 )
        cout << "Error dup2(fd_out, 1) " << errno << endl;

   close(fd_in);
   close(fd_out);

    execvp(argv[0], argv);

}

void parse_input( char * argv[64], char * buf)
{



    for(int i = 0; buf[i] != '\0'; ++i)
    {






    }


}


int executeInput(char *buf)
{
    char * arvg[64];
    int argc = 0;

    parse_input(argv, buf);



    int pid = fork();

    switch(pid)
    {
        case -1: //error forking
            cerr << "Error running process" << endl;
            exit(-1);
            break;

        case 0: //child
            execvp(argv[0], argv);
            cerr << "Error execvp program" << endl;
            break;

        default: //parent
        wait((void*)pid);

    }

    return 0;
}

int main()
{
    char buf[1024];

    signal(SIGCHLD, childReaper);

    while(1)
    {
        printPrompt();
        cin.getline(buf, 1023); //get input
        executeInput(buf); //execute on input
    }



    return 0;
}

