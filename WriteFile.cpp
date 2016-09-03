#include "WriteFile.h"
#include <sstream>

WriteFile::WriteFile(const char* file_name) //making sure the file opens correctly
{
   output_file.open(file_name);
   closed = false;
   
}


void WriteFile::close() //close the file we've been writing to
{
   if (!closed)
   {
      output_file.close();
      closed = true;
   }
}

void WriteFile::writeLine() // function used in writing to the file
{
   if (!closed && line->length() > 0)//not sure about this...this was always my weak spot last semester.
   {
      output_file << line->getText() << endl; //or this.
   }
}
