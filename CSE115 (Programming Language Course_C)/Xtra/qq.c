#include <stdio.h>

int main()
{
    int bigX;
    int bigY;

    bigX=getmaxwidth();
    bigY=getmaxheight();
    initwindow(bigX, bigY,
               "Full screen window - press a key to close");
    line(0,0,bigX,bigY);


    line(bigX,0,0,bigY);

    printf("window size is %d X %d", bigX, bigY);

    getch();
    closegraph();

    return 0;

}
