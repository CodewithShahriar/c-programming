#include <stdio.h>

    int playerScore = 5 ;
    

int main()
{
    
    printf("inside the main function playerScore = %d\n", playerScore);
    display ();
}

void display ()
{
    printf("inside the display function playerScore = %d", playerScore);
}