#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int testcases,n2,n;
    scanf("%d",&testcases);
    while(testcases--){
        scanf("%d",&n);
        printf("%d\n",(int)((n%2)?((pow(2,(n/2+1)))-1)*2:(pow(2,(n/2+1)))-1));
    	// think mathematical first
    }
    return 0;
}
