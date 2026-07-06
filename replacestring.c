#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    int i,j,k,textlength,patternlength,replacelength;
    char *text=(char*)malloc(sizeof(char));
    char *pattern=(char*)malloc(sizeof(char));
    char *rep=(char*)malloc(sizeof(char));
    
    printf("Enter the text:");
    scanf(" %[^\n]",text);
    printf("Enter the pattern:");
    scanf(" %[^\n]",pattern);
    printf("Enter the replaced string:");
    scanf(" %[^\n]",rep);
    
    textlength=strlen(text);
    patternlength=strlen(pattern);
    replacelength=strlen(rep);
    
    for(i=0;i<=textlength-patternlength;i++)
    {
        for(j=0;j<patternlength;j++)
        {
            if(text[i+j]!=pattern[j])
            {
                break;
            }
        }
        if(j==patternlength)
        {
            printf("Position found at %d\n",i);
            break;
        }
    }
    if(patternlength==replacelength)
    {
        for(k=0;k<replacelength;k++)
        {
            text[i]=rep[k];
            i++;
        }
        printf("\nUpdated Text is :%s",text);
    }
    else
    {
        printf("Not Possible");
    }
}