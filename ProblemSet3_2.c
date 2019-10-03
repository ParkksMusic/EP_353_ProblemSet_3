#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

#ifndef M_PI
#define M_PI (3.141592654)
#endif

int main(int argc, char** argv)
{
//Creates the variables needed
    int i,nsamps;
    double samp;
    double twopi = 2.0 * M_PI;
    double angleincr;
//Defining the amount of messurments taken in one cycle
    nsamps = 1000;
    angleincr = twopi / nsamps;
//Will incriment by one up to the specified number in nsamps and print them one by one
    for(i=0; i <nsamps; i++){
        samp = sin(angleincr *i);
        fprintf(stdout,"%.8lf\n",samp);
    }
//Will show when the code has finished
    fprintf(stderr,"done\n");
    return 0;
}