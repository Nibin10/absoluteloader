#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    int i,j,staddr1;
    char line[50],staddr[10];
    fp=fopen("input.txt","r");
    fscanf(fp,"%s",line);
    while(!feof(fp))
    {
        fscanf(fp,"%s",line);
        if(line[0]=='T')
        {
            for(i=2,j=0;i<8,j<6;i++,j++)
            {
                staddr[j]=line[i];
            }
            staddr1=atoi(staddr);
            i=12;
            while(line[i]!='$')
            {
                if(line[i]!='^')
                {
                    printf("00%d \t %c%c\n", staddr1,line[i],line[i+1]);
                    staddr1++;
                    i=i+2;
                }
                    else i++;
            }
        }
        else if(line[0]='E')
        {
            fclose(fp);
            break;
        }
    }
}
