#include "ReadFile.h"
#include <iostream>
#include <string>

ReadFile::ReadFile(const char* file_name)//Constructor. Used to open the file and set the closed and _eof bits. No return.
{
   input_file.open(file_name);
   closed = false;
   _eof = false;
}

/*ReadFile::~ReadFile()
{
	
}*/  //Destructor. C++ will generate one for my memory that isn't dynamically allocated.

bool ReadFile::eof()//Use to get the status of the _eof bit.
{
   return _eof;
}

void ReadFile::close()//This function closes the file it the closed bit hasn't been set to true, and the sets it to true. Returns void.
{
   if (!closed)
   {
      input_file.close();
      closed = true;
   }
}

String* ReadFile::readLine()//Reads in a line from the opened file and sends it to a String* variable
{
   if (closed) return NULL;//If either of these bits are set, we don't want to put garbage in our String*. So return NULL.
   if (_eof) return NULL;

   string text;
   _eof = !(getline(input_file, text));//Sets the _eof bit to true if getline reaches the end of the line.

   String* str = new String((const char*) text.c_str());//Uses a constructor from String class to make a new String* variable to return.
   return str;
}