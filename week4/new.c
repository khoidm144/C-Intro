#include<stdio.h>
int main()
{
char ch1, ch2;
printf("Input the first character:"); // Line 1

scanf("%c", &ch1);
printf("Input the second character:"); // Line 2
 while(getchar() != '\n');
ch2 = getchar();

printf("ch1=%c, ASCII code = %d\n", ch1, ch1);
printf("ch2=%c, ASCII code = %d\n", ch2, ch2);
return 0;
}
