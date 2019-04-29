//This block of code will allow you to encrypt a message with a substitutional encryption. It allows you to replace letters with one another so that you can't understand it without the function.



#include<stdio.h>
#include<conio.h> //I include my libraries inwhich i want my functions from.
void main()
{
      char pt[30],c[27],ct[30];
      int i,j,index;
      clrscr();

      printf("\n\nSubstitutional cipher.\n"); //Gives a title to the program, so user knows it is the correct program.
      printf("\nEnter English Text: "); // tells user where and when to type english text
      gets(pt);

      printf("\nEnter Key From a to z : \n"); //allows user to type their substitutions
      for(i=0;i<26;i++)
      {
            printf("%c-",i+97);
            c[i]=getch();
            printf("%c , ",c[i]);
      }

      for(i=0;i<strlen(pt);i++)
      {
            index=pt[i]-97;                   //line 18 to 28 is coding for interchanging letters.
            ct[i]=c[index];
      }

      printf("\n\nCipher Text is : "); //Prints encrypted text for user to read.
      for(i=0;i<strlen(pt);i++)
      {
            printf("%c",ct[i]); //Encrypted text being printed
      }
      getch();
}
