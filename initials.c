#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i = 0;      
    string name = GetString();
      
    // Always prints first char of name as capital        
    printf("%c", toupper(name[0]));     
    
    // Pointer begins at i = 0
    // Moves through string until reaches end or NULL
    while (name[i] != '\0')
    {
        // When s[i] is a space, print the next char to capital
        if (name[i] == ' ')
        {
            printf("%c", toupper(name[i + 1]));
        }
        
        
        i++; 
    }
       
    printf("\n");     
}            
      

       
    
    
    
   
  
  
  
  
