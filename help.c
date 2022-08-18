#include "monty.h"
/**
 * 
 * 
 */
int check_push(char *token)
{
while (token)
{
    if (strcmp(token,"push"))
    return (0);
    else
    token ++;

}
return (1);
}



int get_value(char *token)
{
    while (token)
    {
        if (atoi(token))
        return(atoi(token));
        else
        token++;
    }
    exit(EXIT_SUCCESS);
}