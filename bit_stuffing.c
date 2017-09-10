#include<stdio.h>
#include<conio.h>
#include<string.h>
char str[40],bit_stuff[50];                          /*Declared as Global, therefore initialized to 0*/
void main()
{ 
  int i,j,count=0;
  clrscr();
  printf("Enter the bit stream to be sent\n");
  gets(str);                                   /*Input the string entered by user */ 
  j=0; for(i=0;str[i]!='\0';i++)
  {
    bit_stuff[j]=str[i];      /*transfer the contents of string str into string bit_stuff */
    if(str[i]=='1')             /*For every '1' we encounter, increment count by 1*/
      count++;
    if(str[i]=='0')             /*If a '0'is encountered,reset the value of count to 0 */
      count=0;
    if((str[i]=='1')&&(count%5==0))          /*For every 5 consecutive '1's, stuff a '0'in bit_stuff string */
    {
      bit_stuff[j+1]='0';
      j++;
    }
    j++;
  }
  printf("\nAfter bit stuffing the string becomes\n");
  puts(bit_stuff);                  /*Display the stuffed bit stream*/
  getch();
}
