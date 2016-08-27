#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {   
        // Gets argv[1] and stores as integer of value k
        int k = atoi(argv[1]);        
        string p = GetString();       
        int i; 
        int n = strlen(p); 
                                   
        // Iterates through the string provided by the user        
        for (i = 0; i < n; i++) 
        {   
            // If the char is a letter then
            // converted to alphanumeric index - formula depends on case type 
            // converted back to ASCII index
           
            if (isalpha(p[i])) 
            {    
                if (isupper(p[i]))               
                {
                    p[i] = (p[i] - 65 + k) % 26 + 65; 
                    printf("%c", p[i]);
             
                }   
            
                else if (islower(p[i]))
                {   
                    p[i] = (p[i] - 97 + k) % 26 + 97;
                    printf("%c", p[i]);
                }  
            }
            
            // If the char is anything other than a letter
            
            else if (isblank(p[i]))
            {
                printf("%c", p[i]); 
            
            }
            
            else 
            {
                printf("%c", p[i]);
            }
        }
        
        printf("\n");
        return 0;
    }
    
    // If more or less than one argument is provided by the user
    // then the program is terminated 
            
    else if (argc == 1 || argc > 2)
    
    {
        printf("ERROR: Please enter a valid key!\n");
        return 1;
        
    }
}
       
      


        
