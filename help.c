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
     token ++;
    else
    return(1);

}
return (0);
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








char get_token(char *op, char *token)

{
    while (strcmp(token,op))
    token ++;

    return (*token);
}