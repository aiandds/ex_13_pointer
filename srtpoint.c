#include<stdio.h>
#include<string.h>

int main()
{
    char *tmp;
    int i,j,k;

    char *arr[5]={"BILL","STEVE","JOBS","MARK","ARAVIND"};





    for(i=0;i<5;i++)
    {
       printf("%s,  ",arr[i]);
    }
    printf("\n");
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            k=strcmp(arr[j],arr[j+1]);
            if(k>0)
            {
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
                
            }
            
        }
    }
    printf("sorted name list\n");

    for(i=0;i<5;i++)
    {
       printf("%s,  ",arr[i]);
    }
    printf("\n");
    return 0;
}
