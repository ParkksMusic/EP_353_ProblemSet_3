#include <stdio.h>
int main()
{
//Creates variables needed
    int i, number, count;

    printf("All Prime Numbers from 1 to 1000 are: \n");
//Will increment by one up to 1000
    for(number =1; number <= 1000; number++)
    {
        count = 0;
//If the number is not a prime number then it will move on to the next without printing
        for (i = 2; i <= number/2; i++)
        {
            if(number%i ==0)
            {
                count++;
                break;
            }
        }
        if(count == 0 && number != 1)
        {
//Prints the prime number one by one
            printf("%d\n", number);
        }
    }
    return 0;
}
