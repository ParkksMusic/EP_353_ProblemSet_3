#include <stdio.h>
int main ()
{
//Asks for a note to be entered
printf("Enter a note\n");
char input;
//Scans the entered note to be put through switch
scanf("%c", &input);
char note = input;
switch(note){
    case 'A' :
        printf("The corresponding integer value of A is 9\n");
        break;
    case 'B' :
        printf("The corresponding integer value of B is 11\n");
        break;
    case 'C' :
        printf("The corresponding integer value of C is 0\n");
        break;
    case 'D' :
        printf("The corresponding integer value of D is 2\n");
        break;
    case 'E' :
        printf("The corresponding integer value of E is 4\n");
        break;
    case 'F' :
        printf("The corresponding integer value of F is 5\n");
        break;
    case 'G' : 
        printf("The corresponding integer value of G is 7\n");
        break;
}
    return 0;
}
