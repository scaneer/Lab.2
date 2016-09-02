#if !defined READ_FILE
#define READ_FILE//necessary include guards

#include "Text.h"//Need the String class because a function returns a String* variable.

#include <fstream> //Need this because of ifstream object
using namespace std;

class ReadFile
{
	private:// These variable are not needed in the driver, and so are placed in private.
		bool _eof;
		bool closed;
		ifstream input_file;
	public: //All of these functions are needed at some point in the driver, so they are in public
		void close();//Used to close the file being read from and set the closed bit.
		bool eof();//Simply returns whether or not the _eof bit has been set by encountering the end of the file.
		ReadFile(const char* file_name);//Constructor. Used to initialize all of the variables to what they need to be.
		//~ReadFile(); Destructor. Used to cleanup dynamically allocated memory. In this class, there are no pointers.
		String* readLine();//Used to read in text from the file and output it to a String* variable.
};

#endif