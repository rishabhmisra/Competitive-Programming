#include <stdio.h>
#include <string.h>
#include<math.h>

int main(void) {

	int t,i,len,flag;
	char a[12345],save;
	scanf("%d",&t);

	while (t-- > 0) {

	    scanf("%s",a);
	    len = strlen(a);
	    flag=0;
	    for(i=0;i<len/2;i++) {
	        if(a[i] == a[len-i-1]) {
	            if (a[i] == '.') {
                    a[i]= 'a';
                    a[len-i-1] = 'a';
                }
	        } else if (a[i] == '.') {
                a[i]=a[len-i-1];
	        } else if (a[len-i-1] == '.') {
                a[len-i-1] = a[i];
	        } else {
               flag=1; break;
	        }
	    }

	    if(len%2==1 && a[(len-1)/2] == '.') {
            a[(len-1)/2] = 'a';
	    }

	    if(flag==1) {
	        printf("-1\n");
	    } else {
	        printf("%s\n",a);
	    }
	}

	return 0;
}

