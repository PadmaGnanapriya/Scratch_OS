
//Level 01 is closed.It was low level coding
/*
kmain()
{
    char* vidmen =(char*)0xb8000;
    vidmen[0]='*';
    vidmen[1]=0x01;
    vidmen[2]='P';
    vidmen[3]=0x02;
    vidmen[4]='A';
    vidmen[5]=0x03;
    vidmen[6]='D';
    vidmen[7]=0x04;
    vidmen[8]='M';
    vidmen[9]=0x05;
    vidmen[10]='A';
    vidmen[11]=0x06;
    vidmen[12]='O';
    vidmen[13]=0x07;
    vidmen[14]='S';
    vidmen[15]=0x08;
}
*/ 

#include "include/screen.h"
kmain()
{       
        clearScreen();
        print("Hi, And welcome to the IknowOS\nPlease don't forget to subscribe to https://www.youtube.com/user/iknowbrain\nThank you");
}
