//This code is used to encrypt a normal string of english text and encrypt it so that the letters shift positions to the right relative to their order in the alphabet, 
//the amount they move is called the 'key' or 'rotational amount', for e.g.
//With Key = 1,      A=B, B=C, C=D ... Y=Z, Z=A.



#include<stdio.h>		//the library of functions I wish to use.
#include<stdlib.h>		//Included just in case needed when writing new code or editing code.

int
main ()
{
  char message[100], ch;
  int i, key;

  printf ("Enter a message to encrypt: ");	//this is for typing string that is going to be encrypted.
  gets (message);
  printf ("Enter key (rotational amount): ");	//the key is how many places you want the letters to move
  scanf ("%d", &key); // reads key

  for (i = 0; message[i] != '\0'; ++i) 
    {
      ch = message[i];

      if (ch >= 'a' && ch <= 'z') //sets bounds and intitates all lower-case letters from A to Z.
	{
	  ch = ch - key; //function for lower-case letters between A to Z.

	  if (ch < 'a') 
	    {
	      ch = ch + 'z' - 'a' + 1; //function for if lowercase letter needs to rotate past A.
	    }

	  message[i] = ch;
	}
      else if (ch >= 'A' && ch <= 'Z') //sets bounds and intitates all upper-case letters from A to Z.

	{
	  ch = ch - key; //function for upper-case letters between A to Z.

	  if (ch < 'A')
	    {
	      ch = ch + 'Z' - 'A' + 1; //function for if upper-case letter needs to rotate past A.
	    }

	  message[i] = ch;
	}
    }

  printf ("Encrypted message: %s", message); //Displays your encrypted message

  return 0; // Ends program
}