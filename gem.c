#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() 
{
    int n,i,j,z,k;
    char str[100][100];
    int alpha[26];
    int count=0;
    char c;
    
    for(i=0;i<26;i++)
         alpha[i]=0;
    
    scanf("%d",&n);
    
    for(z=0;z<n;z++)
        scanf("%s",str[z]);
    
    for(z=0;z<n;z++)
    {
            for(i=0;i<strlen(str[z]);i++)
            {
		        c=str[z][i];
		        alpha[c-'a']+=1;
            //alpha[str[z][i]-'a']++;
	          }
	          for(k=0;k<26;k++)
	              if(alpha[k]!=0 && alpha[k]>z)
		                  alpha[k]=z+1;
		            else
			                alpha[k]=-999;
            
    }
    for(i=0;i<26;i++)
        if(alpha[i]==n)
            count++;
    printf("%d",count);   
    return 0;
}
