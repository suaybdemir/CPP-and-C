#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fptr;
    //fptr= fopen("data.txt","w");

    //fptr= fopen("data.txt","a");
    fptr=fopen("data.txt","r");
    //char data[100];
    //char name;
    int numbers[7],i;

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
        
        //printf("Enter a sentence:");
        //fgets(data,sizeof(data),stdin);

        //fprintf(fptr,"%s",data);

        //fprintf(fptr,"I do love C programming %d\n");
        //fputs("C is an interesting language\n",fptr);

        //for(i=0;i<7;i++)
           // scanf("%d",&numbers[i]);
        //fwrite(numbers,sizeof(int),7,fptr);

        fread(numbers,sizeof(int),7,fptr);

        for(i=0;i<7;i++)
            printf("%d \n",numbers[i]);

        printf("\n--Data has written successsfuylly!--\n");
    }
    fclose(fptr);
    return 0;
}
