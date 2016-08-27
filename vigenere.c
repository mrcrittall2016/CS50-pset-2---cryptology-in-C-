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
        string k = argv[1];       
        int i; 
        int j;        
        int keylength = strlen(k);
      
        for (i = 0; i < keylength; i++)
        {
            // isalpha can only check chars not strings. 
            // So must iterate through keyword to invoke this function!
            
            if (isalpha(k[i]))
            {         
                if (isupper(k[i]))
                {
                    k[i] = k[i] - 65;
                }
            
                else if (islower(k[i]))
                {
                    k[i] = k[i] - 97;
                }  
            }
            
            else
            {
                printf("ERROR: Please provide a valid key!\n");
                return 1; 
            }         
               
        }
        // Ask user for plaintext AFTER iterating through key word.
        // Otherwise error message returns after plaintext input. 
        
        string p = GetString();
        int n = strlen(p); 
        
        // Can declare and initialise two variables in the same loop. 
        // Ensures k and p are incremented at the SAME time. 
        
        for (i = 0, j = 0; j < n; i++, j++)
        {                  
            // !used here to denote any char which is not alphabetical
            // not using k[i] here - need to set pointer back by i--
            // compensates for k[i] being incremented again               
               
            if (!isalpha(p[j]))
            {
                printf("%c", p[j]);
                i--;               
            
            }              
            // If the char is a letter then converted to alphanumeric index
            // the ith letter (key word) is added to the jth letter (plaintext)
            // Note use of modulo to ensure key word wraps round
            // o is string length of key word, declared previously    
            else
            {   
                if (isupper(p[j]))
                {
                    p[j] = (p[j] - 65 + k[i % keylength]) % 26 + 65;
                    printf("%c", p[j]);
                }
                   
                else if (islower(p[j]))
                {
                    p[j] = (p[j] - 97 + k[i % keylength]) % 26 + 97;
                    printf("%c", p[j]);
                }
            }
        } 
             
        printf("\n");
        return 0;
    }
            
    else if (argc == 1 || argc > 2)
    
    {
        printf("ERROR: Please enter a valid key!\n");
        return 1;
        
    }
}
       
      


        
