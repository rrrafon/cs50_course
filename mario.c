//this program prints mario stairs

#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int n;
    //prompt user with input
    do{
        n = get_int("Enter an number(0-23): ");
    }
    while(n < 0 || n>23);
    
    //iterate to print the hash and spaces
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j < n; j++)
        {
            printf(" ");    
        }
        for(int k = n-i; k <= n; k++)
        {
            printf("#");    
        }
        
        printf("\n");
    }
    
}
