#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j,temp,count;
    char inputA[]="I am Mahin";
    char outputA[12][2];
    n=strlen(inputA);
//       n=strlen(inputA);

    for(i=0;i<n;i++)
    {
        outputA[i][0]=inputA[i];
    }

    for(i=0;i<n;i++)
    {
        outputA[i][0]=count=1;
        for(j=i+1;j<n;j++)
        {
            if(inputA[i]==inputA[j])
            {
                outputA[i][1] = count++;
                outputA[j][0]= 69 ;
                //temp=1;
                break;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {   if(outputA != 69)
            {
                printf("%c is %d times\n", outputA[i][0],outputA[i][j]);
            }
        }
    }

    return 0;
}
