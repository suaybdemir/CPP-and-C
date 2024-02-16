#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fptr;
    fptr= fopen("data.txt","a");
    char data[100];
    if(fptr==NULL)
    {
        printf("File not opened\n");
    }
    else
    {
        /*if(name=='\n')
        {
            putc('\n',fptr);
        }*/

        /*for(name='a';name<='z';name++)
        {
            putc(name,fptr);
            putc('\n',fptr);
        }*/
        
        printf("Enter a sentence:");
        fgets(data,sizeof(data),stdin);

        fprintf(fptr,"%s",data);

        //fprintf(fptr,"I do love C programming %d\n");
        //fputs("C is an interesting language\n",fptr);

        printf("Data has written successsfuylly!\n");
    }
    fclose(fptr);
    return 0;
}
