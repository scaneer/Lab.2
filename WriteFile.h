#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class WriteFile
{
   private: //User, don't touch this.

			ofstream output_file;
			bool closed;

	public: //User, you might be smart enough to deal with this...if you consult me first.
			
			WriteFile(const char* file_name);
			
			void writeLine();
			
			void close();

};
#endif
