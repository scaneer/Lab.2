#include "ReadFile.h"//I modified this one. - D. Smith
#include "WriteFile.h"//slcaneer42
#include "String.h"//Not modified
#include "Tokens.h"//Not sure why this is included at this time

/*********************
	Lab1:			 *
    Lab02Driver.cpp  *
	Samantha Caneer	 *
	Dakota Smith	 *
*********************/

#include <iostream>//Useful for testing where a program stops during testing, but not needed during the running of the function.
int main()
{
   ReadFile* rf = new ReadFile("cds.txt"); //Use of the constructor for ReadFile. Needs new keyword in driver.
   WriteFile* wf = new WriteFile("out.txt"); //Use of the constructor for WriteFile. Again a new keyword.

   while(!rf->eof())//Loop that runs until the end of the file.
   {
      String* line = rf->readLine();//Calling the readLine function from the ReadFile class to output a String* type variable
      wf->writeLine(line);//Calling the writeFile function to output to a file.
      delete line;//Deletes the String* variable.
   }

   rf->close();//ReadFile class variable calls the close function to close the file and set closed to true
   wf->close();//Closes the file being written to.
   delete rf;//Delete the ReadFile* variable in order to save space.
   delete wf;

   return 0;
}