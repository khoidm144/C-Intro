#include <stdio.h>
#define PERIOD '.'
int main() {
int  c;
 while ((c=getchar())!=-1)
   { if(c=='.') break;
     else if(c>='0' && c<='9')
       continue;
     else putchar(c);
   }
 printf("*** Good Bye ***\n");
 return 0;
}
